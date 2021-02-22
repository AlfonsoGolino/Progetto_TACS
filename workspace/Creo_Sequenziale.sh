#!/bin/bash
full_path=$(realpath $0)
dir_path=$(dirname $full_path)
file_sorgente=$dir_path/$1
no_file_sorgente=$dir_path/no_$1
push=$2
pop=$3
n_thread=$4
res=$(python3 ./Stringe_Fattoriale.py $pop $push) 
cd benchmark;
if [ ! -f "./Bug_Trovati.txt" ]
then
    touch Bug_Trovati.txt
fi
VAR1="Test_Case_Push"
VAR2="_Pop"
VAR3="_Thread"
VAR4="_Rounds"
Test_Case="$VAR1$2$VAR2$3$VAR3$4$VAR4$5"
if [ ! -d "$Test_Case" ]
then
    echo "Creo Cartella" 
    mkdir $Test_Case;
else
	echo "La cartella $Test_Case già esiste"
fi
cd $Test_Case;
cd ..;
cd ..;
for val in $res; do
	cd benchmark;
	cd $Test_Case;
	if [ ! -d "Test_Case_$val" ]
	then
   		 mkdir "Test_Case_$val";
   	fi
   	cd Test_Case_$val;
    if [ ! -d "./Tracce_Errore" ]
	then
    	echo "Creo Cartella Tracce_Errore" 
    	mkdir Tracce_Errore
	fi
	if [ ! -d "./File_Analizzati" ]
	then
    	echo "Creo Cartella File_Analizzati" 
    	mkdir File_Analizzati
	fi
	cd File_Analizzati;
	touch Test_$val.c
	touch no_Test_$val.c
   	file="./benchmark/$Test_Case/Test_Case_$val/File_Analizzati/Test_$val.c"
	no_file="./benchmark/$Test_Case/Test_Case_$val/File_Analizzati/no_Test_$val.c"
   	cp $file_sorgente Test_$val.c
   	cp $no_file_sorgente no_Test_$val.c
   	cd ..;
	cd ..;
	cd ..;
	cd ..;
   	python3 ./Unwindt.py $pop $push $file $n_thread $val
	python3 ./Unwindt.py $pop $push $no_file $n_thread $val
done