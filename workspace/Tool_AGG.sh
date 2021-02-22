#!/bin/bash
start=`date +%s`

full_path=$(realpath $0)
dir_path=$(dirname $full_path)
unsafe=true
file=$1
push=$2
pop=$3
n_thread=$4
stringa_cartella=$5
round=$6
VAR1="Test_Case_Push"
VAR2="_Pop"
VAR3="_Thread"
VAR4="_Rounds"
Test_Case="$VAR1$2$VAR2$3$VAR3$4$VAR4$6"
file_atomico=$dir_path/benchmark/$Test_Case/Test_Case_$stringa_cartella/File_Analizzati/$1
file_no_atomico=$dir_path/benchmark/$Test_Case/Test_Case_$stringa_cartella/File_Analizzati/no_$1
cd ..;
cd lazy-cseq-2.0;
echo "Eseguo lazy per effettuare la sequenzializzazione ..."
echo 
startlasy=`date +%s`
res=$(./cseq-feeder.py -i $file_atomico --stop-on-fail --rounds $round)
stoplasy=`date +%s`
runtimelasy=$((stoplasy-startlasy))
tsomma=runtimelasy
echo "Il tempo di esecuzione di Lazy è di: $runtimelasy secondi"

if [[ $res == *"UNSAFE"* ]]; then
	echo "Il Programma risulta essere UNSAFE, sono al lavoro per trovare lo stato di configurazione completo." 
elif [[ $res == *"SAFE"* ]]; then
	echo "Il programma risulta essere SAFE, ho completato la configurazione dello stato. Ora verifico la configurazione NON atomica." 
	no_risultato=$(./cseq-feeder.py -i file_no_atomico --stop-on-fail --rounds $round)
	echo "$no_risultato"
	unsafe=false
	cd .. ;
	cd workspace;
	cd benchmark;
	cd $Test_Case;
	cd Test_Case_$stringa_cartella
	touch Num_Iterazione_$stringa_cartella.txt
	echo "E' stata fatta un'iterazione per trovare la condizione corretta per la configurazione con $push push e $pop pop con $round round e numero di threads $n_thread ." > Num_Iterazione_$stringa_cartella.txt
else
	unsafe=false
	echo "Errore. L'errore è il seguente"
	echo "$res"
fi
cd ..;
cd workspace;
while [ "$unsafe" = true ] 
do
	i=$((i+1))
	nome_file="ERROR_TRACE_${i}.txt"
	echo
	echo "--------------------- Analizzo la $i° iterazione del test con $push push e $pop pop e $round round e numero di threads $n_thread . ---------------------"
	startcbmc=`date +%s`
	cbmc ./benchmark/$Test_Case/Test_Case_$stringa_cartella/File_Analizzati/_cs_Test_$stringa_cartella.c --stop-on-fail > ./benchmark/$Test_Case/Test_Case_$stringa_cartella/Tracce_Errore/$nome_file
	stopcbmc=`date +%s`
	runtimecbmc=$((stopcbmc-startcbmc))
	tsomma=$((tsomma+runtimecbmc))
	echo "Il tempo di esecuzione di CBMC per questa iterazione è di: $runtimecbmc secondi"
	risultato=$( tail -n 1 ./benchmark/$Test_Case/Test_Case_$stringa_cartella/Tracce_Errore/$nome_file )
	if [[ $risultato == "VERIFICATION FAILED" ]]; then
		echo "Il Programma risulta essere UNSAFE, sono al lavoro per trovare lo stato di configurazione completo."
		echo "--------------------- Abbiamo utilizzato $push push e $pop pope $round round, con $n_thread numero di threads. ---------------------" >> $dir_path/benchmark/$Test_Case/Test_Case_$stringa_cartella/Tracce_Errore/$nome_file
		file1=./benchmark/$Test_Case/Test_Case_$stringa_cartella/File_Analizzati/_cs_Test_$stringa_cartella.c
		file2=./benchmark/$Test_Case/Test_Case_$stringa_cartella/File_Analizzati/no_Test_$stringa_cartella.c
		python3 ./take_value.py ./benchmark/$Test_Case/Test_Case_$stringa_cartella/Tracce_Errore/$nome_file $n_thread $file1 $file2
	elif [[ $risultato == "VERIFICATION SUCCESSFUL" ]]; then
		echo "Il programma risulta essere SAFE."
		echo 
		echo "Ho completato la configurazione dello stato. Ora verifico la configurazione NON atomica."
		cd ..;
		cd lazy-cseq-2.0;
		startlasynoatomico=`date +%s`
		no_risultato=$(./cseq-feeder.py -i $file_no_atomico --stop-on-fail --rounds $round)
		stoplasynoatomico=`date +%s`
		runtimelasynoatomico=$((stoplasynoatomico-startlasynoatomico))
		tsomma=$((tsomma+runtimelasynoatomico))
		echo "Il tempo di esecuzione di Lazy è di: $runtimelasynoatomico secondi"
		echo "$no_risultato"
		cd ..;
		cd workspace;
		cd benchmark;
		end=`date +%s`
		runtime=$((end-start))
		echo "Il tempo di esecuzione del TEST è di: $runtime secondi"
		ttool=$((runtime-tsomma))
		echo "Il tempo di esecuzione di ToolAGG elimando dal calcolo il tempo di esecuzione di Lazy e Cbmc è di: $ttool secondi"
		if [[ $no_risultato == *"UNSAFE"* ]]; then
			echo "è stato trovato un bug nella struttura non atomica creo la traccia d'errore"
			string_insert="Sono stati trovati bug con interfogliemanto $stringa_cartella nel caso di $push push, $pop pop, $round round e $n_thread thread sul file non atomico $file_no_atomico."
			if grep -q "$string_insert" "Bug_Trovati.txt"
			then
				echo "Il bug con questa configurazione già è stato trovato vai su ./benchmark/Bug_Trovati.txt"
			else
				echo "Sono stati trovati bug con interfogliemanto $stringa_cartella nel caso di $push push, $pop pop, $round round e $n_thread thread sul file non atomico $file_no_atomico." >> Bug_Trovati.txt
			fi
			cd $Test_Case;
			cd Test_Case_$stringa_cartella
			cbmc ./File_Analizzati/_cs_no_$1 --stop-on-fail > ./Tracce_Errore/no_atomico_$nome_file.txt
			unsafe=false
			touch Num_Iterazione_$stringa_cartella.txt
			echo "Sono state fatte $i iterazioni per trovare la condizione corretta per la configurazione con $push push e $pop pop e $round round con numero di threads $n_thread . Tempo totale $runtime Secondi" > Num_Iterazione_$stringa_cartella.txt
		elif [[ $no_risultato == *"SAFE"* ]]; then
			string_insert="Sono stati trovati bug nel caso di $push push, $pop pop, $round round e $n_thread thread sul file non atomico $file_no_atomico."
			if grep -q "$string_insert" Bug_Trovati.txt
			then
				cd ..;
				python3 ./Replace_String.py $string_insert
				cd benchmark;
			fi
			cd $Test_Case;
			cd Test_Case_$stringa_cartella
			unsafe=false
			touch Num_Iterazione_$stringa_cartella.txt
			echo "Sono state fatte $i iterazioni per trovare la condizione corretta per la configurazione con $push push e $pop pop e $round round con numero di threads $n_thread . Tempo totale $runtime Secondi" > Num_Iterazione_$stringa_cartella.txt
		fi	
	else
		unsafe=false
		echo "Errore. L'errore è il seguente"
		echo "$risultato"
	fi

done
