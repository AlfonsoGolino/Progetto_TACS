# Progetto TACS                                 
- Progetto per l'esame di TECNICHE AUTOMATICHE PER LA CORRETTEZZA DEL SOFTWARE | Tool_AGG | UNISA | Dicembre 2020
- Si ringrazia il Professore Salvatore La Torre per aver fornito il tool Lazy-Cseq-2.0
 Studenti: G.Adinolfi | G.D'Amore | A.Golino 

 ________                    __           ______    ______    ______  
|       \\                  |  \\        /      \\ /      \\  /      \\ 
 \\$$$$$$$$______    ______  | $$       |  $$$$$$\\|  $$$$$$\\|  $$$$$$\\
   | $$  /      \\  /      \\ | $$       | $$__| $$| $$ __\\$$| $$ __\\$$
   | $$ |  $$$$$$\\|  $$$$$$\\| $$       | $$    $$| $$|    \\| $$|    \\
   | $$ | $$  | $$| $$  | $$| $$       | $$$$$$$$| $$ \\$$$$| $$ \\$$$$
   | $$ | $$__/ $$| $$__/ $$| $$       | $$  | $$| $$__| $$| $$__| $$
   | $$  \\$$    $$ \\$$    $$| $$ ______| $$  | $$ \\$$    $$ \\$$    $$
   \\$$   \\$$$$$$   \\$$$$$$  \\$$|      \\$$   \\$$  \\$$$$$$   \\$$$$$$ 


## Repository Structure
- *lazy-cseq2.0*: codice tool lazy-cseq
- *lstack*: struttura lockfree
- *workspace*: Test.py per avviare il tool

## Installazione
1. Assicurati di aver installato correttamente il tool Lazy-Cseq-2.0, dettagli nel file ReadmeLazy.

2. Installare librerie:
Python 3 --> sudo apt install python3.8
Python 2 --> sudo apt install python-numpy
Python 3 --> sudo apt install python3-numpy
dos2unix --> sudo apt install dos2unix

3. La disposizione delle cartelle deve rimanere coerente con quella estratta dal file archivio.
	Una modifica di tale disposizione potrebbe comportare un non funzionamento.

4. Eseguire il tool all'interno della cartella workspace, usando il seguente comando, specificando l'opzione :
	python3 Test.py <input.c> [opzione]

Digitare una delle seguenti opzioni:
	--R       [Min_Push][Max_Push][Min_Pop][Max_Pop][Min_Thread][Max_Thread][Round] Random
	--S       [Push][Pop][Thread][Round]                                            Esaustivo
	--M       [Push][Pop][Thread][Stringa][Round]                                   Manuale
	--R --E   [Min_Push][Max_Push][Min_Pop][Max_Pop][Min_Thread][Max_Thread][Round] Random-Esaustivo
	--E --R   [Push][Pop][Thread][Round]                                            Esaustivo-Random

5. Veranno generati dei benchmark, riportati nella relativa cartella presente in workspace. 
La cartella benchmark è suddivisa in TestCase in base al numero d'operazioni push e pop fatte e al numero di threads utilizzati.
I vari interfogliamenti vengono indicati con cifre binarie, 1 per rappresentare push e 0 pop.
Ad esempio: la cifra binaria 10101, rappresenta il seguente interfogliamento Push Pop Push Pop Push, per un totale di 3 Push e 2 Pop.

## Authors
- *Giuseppe D'Amore*
- *Giuseppe Adinolfi*
- *Alfonso Golino*

