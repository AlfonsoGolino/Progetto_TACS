#!/usr/bin/env python3
import sys
import random
import subprocess
import os
# converto i file bash per essere eseguiti su linux
subprocess.run(['dos2unix','./Creo_Sequenziale.sh'])
subprocess.run(['dos2unix','./Creo_Manuale.sh'])
subprocess.run(['dos2unix','./Tool_AGG.sh'])
count=0

if ((len(sys.argv) == 7) and  sys.argv[2] == "--S"):
	atomico=sys.argv[1]
	Push = int(sys.argv[3])
	Pop = int(sys.argv[4])
	Thread = int(sys.argv[5])
	Round = int(sys.argv[6])
	if((int(Round) <= 0) or (int(Round) >= 5)):
		print("Il numero di Round deve essere maggiore di 0 e minore di 4")
	else:
		stop = True
		w = 0
		for x in range(1,Push+1):
			for y in range(1,Pop+1):
				for z in range(2,Thread+1):
					if(x>=y):
						print("Analizzo la configurazione: "+str(x)+"Push "+str(y)+"Pop "+str(z)+"Threads"+str(Round)+"Threads")
						count+=1
						print("Test case numero %d" %count)
						list_file_names = subprocess.run(['./Creo_Sequenziale.sh',atomico,str(x),str(y),str(z),str(Round)])
						stop=True

						while (stop):
							lunghezza=x+y

							fattoriale=1
							app=lunghezza
							for t in range(1, lunghezza):
							  fattoriale*=app
							  app-=1
							  
							valore=1
							c = 0
							no =True
							l = []
							for u in range(0, fattoriale):
								stringa=bin(valore)
								if((stringa.count('1')==x) and (stringa.count('0')==y+1)): 
									stringa1 = stringa[2:]
									for i in range(len(stringa1)):
										if(stringa1[i] == '1'):
											c+=1
										if(stringa1[i] == '0'):
											c-=1
										if(c < 0):
											no = False

									if(no):
										l.append(stringa1)
									no = True

									c = 0
										
								valore+=1


							nome = "Test_"
							nome += l[w]
							nome += ".c"
							
							list_file_names = subprocess.run(['./Tool_AGG.sh',str(nome),str(x),str(y),str(z),str(l[w]),str(Round)])
							w += 1
							if(w == len(l)):
								stop=False
								w=0
								nome=""
							print ("%d " %list_file_names.returncode)



elif ((len(sys.argv) == 10) and  sys.argv[2] == "--R"):
	atomico=sys.argv[1]
	flag = 1
	Min_Push = int(sys.argv[3])
	Max_Push = int(sys.argv[4])

	Min_Pop = int(sys.argv[5])
	Max_Pop = int(sys.argv[6])

	Min_Thread = int(sys.argv[7])
	Max_Thread = int(sys.argv[8])
	Round = int(sys.argv[9])
	if((int(Round) <= 0) or (int(Round) >= 5)):
		print("Il numero di Round deve essere maggiore di 0 e minore di 4")
	else:
		while flag == 1:

			x = random.randint(Min_Push, Max_Push)
			y = random.randint(Min_Pop, Max_Pop)
			z = random.randint(Min_Thread, Max_Thread)
			if(x>=y):
				print("I numeri random generati sono: ", end="")
				print(x,y,z)

				lunghezza=x+y
				fattoriale=1
				app=lunghezza
				for t in range(1, lunghezza):
				  fattoriale*=app
				  app-=1
				  
				valore=1
				c = 0
				no =True
				l = []
				for u in range(0, fattoriale):
					stringa=bin(valore)
					if((stringa.count('1')==x) and (stringa.count('0')==y+1)): 
						stringa1 = stringa[2:]
						for i in range(len(stringa1)):
							if(stringa1[i] == '1'):
								c+=1
							if(stringa1[i] == '0'):
								c-=1
							if(c < 0):
								no = False

						if(no):
							l.append(stringa1)
						no = True

						c = 0
							
					valore+=1


				k = random.randint(0, len(l)-1)
				stringa_casuale = l[k]
				print("La stringa casuale scelta è: " + stringa_casuale)

				nome = "Test_"
				nome += stringa_casuale
				nome += ".c"

				subprocess.run(['./Creo_Manuale.sh',atomico,str(x),str(y),str(z),stringa_casuale,str(Round)])
				subprocess.run(['dos2unix','./Tool_AGG.sh'])
				list_file_names = subprocess.run(['./Tool_AGG.sh',str(nome),str(x),str(y),str(z),stringa_casuale,str(Round)])
				#print(list_file_names)
				#print ("%d " %list_file_names.returncode)
				flag = 0
			else:
				flag = 1


elif ((len(sys.argv) == 8) and  sys.argv[2] == "--M"):
	atomico=sys.argv[1]

	Push = int(sys.argv[3])
	Pop = int(sys.argv[4])
	Thread = int(sys.argv[5])
	Stringa_Bin = str(sys.argv[6])
	Round = int(sys.argv[7])
	if((int(Round) <= 0) or (int(Round) >= 5)):
		print("Il numero di Round deve essere maggiore di 0 e minore di 4")
	else:
		no = True
		c = 0 
		if(len(Stringa_Bin) == (Push+Pop)):
			for i in range(len(Stringa_Bin)):
				if(Stringa_Bin[i] == '1'):
					c+=1
				if(Stringa_Bin[i] == '0'):
					c-=1
				if(c < 0 or c > Push):
					no = False
					print("Hai inserito una stringa non valida. Riprova")

			if(no):
				subprocess.run(['./Creo_Manuale.sh',atomico,str(Push),str(Pop),str(Thread),Stringa_Bin,str(Round)])
				nome = "Test_"
				nome += Stringa_Bin
				nome += ".c"
				subprocess.run(['./Tool_AGG.sh',str(nome),str(Push),str(Pop),str(Thread),Stringa_Bin,str(Round)])
		else:
			print("La lunghezza della stringa è errata. Riprova")


elif ((len(sys.argv) == 8) and  sys.argv[2] == "--E" and sys.argv[3] == "--R"):
	atomico=sys.argv[1]

	Push = int(sys.argv[4])
	Pop = int(sys.argv[5])
	Thread = int(sys.argv[6])
	Round = int(sys.argv[7])
	if((int(Round) <= 0) or (int(Round) >= 5)):
		print("Il numero di Round deve essere maggiore di 0 e minore di 4")
	else:
		for x in range(1,Push+1):
			for y in range(1,Pop+1):
				for z in range(2,Thread+1):
					if(x>=y):
						print("Analizzo la configurazione: "+str(x)+"Push "+str(y)+"Pop "+str(z)+"Threads"+str(Round)+"Round")
						count+=1
						print("Test case numero %d" %count)

						lunghezza=x+y
						fattoriale=1
						app=lunghezza
						for t in range(1, lunghezza):
						  fattoriale*=app
						  app-=1
						  
						valore=1
						c = 0
						no =True
						l = []
						for u in range(0, fattoriale):
							stringa=bin(valore)
							if((stringa.count('1')==x) and (stringa.count('0')==y+1)): 
								stringa1 = stringa[2:]
								for i in range(len(stringa1)):
									if(stringa1[i] == '1'):
										c+=1
									if(stringa1[i] == '0'):
										c-=1
									if(c < 0):
										no = False

								if(no):
									l.append(stringa1)
								no = True

								c = 0
									
							valore+=1


						k = random.randint(0, len(l)-1)
						stringa_casuale = l[k]
						print(stringa_casuale)
				
						nome = "Test_"
						nome += stringa_casuale
						nome += ".c"
						subprocess.run(['./Creo_Manuale.sh',atomico,str(x),str(y),str(z),stringa_casuale,str(Round)])
						list_file_names = subprocess.run(['./Tool_AGG.sh',str(nome),str(x),str(y),str(z),stringa_casuale,str(Round)])
		

elif ((len(sys.argv) == 11) and  sys.argv[2] == "--R" and sys.argv[3] == "--E"):
	atomico=sys.argv[1]

	Min_Push = int(sys.argv[4])
	Max_Push = int(sys.argv[5])

	Min_Pop = int(sys.argv[6])
	Max_Pop = int(sys.argv[7])

	Min_Thread = int(sys.argv[8])
	Max_Thread = int(sys.argv[9])
	Round = int(sys.argv[10])
	if((int(Round) <= 0) or (int(Round) >= 5)):
		print("Il numero di Round deve essere maggiore di 0 e minore di 4")
	else:
		x = random.randint(Min_Push, Max_Push)
		y = random.randint(Min_Pop, Max_Pop)
		z = random.randint(Min_Thread, Max_Thread)
		if(x>=y):
			print("I numeri random generati sono: ", end="")
			print(x,y,z)
		list_file_names = subprocess.run(['./Creo_Sequenziale.sh',atomico,str(x),str(y),str(z),str(Round)])

		stop = True
		w = 0

		while (stop):
			lunghezza=x+y

			fattoriale=1
			app=lunghezza
			for t in range(1, lunghezza):
			  fattoriale*=app
			  app-=1
			  
			valore=1
			c = 0
			no =True
			l = []
			for u in range(0, fattoriale):
				stringa=bin(valore)
				if((stringa.count('1')==x) and (stringa.count('0')==y+1)): 
					stringa1 = stringa[2:]
					for i in range(len(stringa1)):
						if(stringa1[i] == '1'):
							c+=1
						if(stringa1[i] == '0'):
							c-=1
						if(c < 0):
							no = False

					if(no):
						l.append(stringa1)
					no = True

					c = 0
						
				valore+=1

			print("Analizzo la sequenza: "+l[w])
			nome = "Test_"
			nome += l[w]
			nome += ".c"
			list_file_names = subprocess.run(['./Tool_AGG.sh',str(nome),str(x),str(y),str(z),str(l[w]),str(Round)])
			w += 1
			if(w == len(l)):
				stop=False
				w=0
				nome=""

else:
	print (" ________                    __           ______    ______     ______  ")
	print ("|       \\                  |  \\        /      \\ /      \\  /      \\ ")
	print (" \\$$$$$$$$______    ______  | $$       |  $$$$$$\\|  $$$$$$\\|  $$$$$$\\")
	print ("   | $$  /      \\  /      \\ | $$       | $$__| $$| $$ __\\$$| $$ __\\$$")
	print ("   | $$ |  $$$$$$\\|  $$$$$$\\| $$       | $$    $$| $$|    \\| $$|    \\")
	print ("   | $$ | $$  | $$| $$  | $$| $$       | $$$$$$$$| $$ \\$$$$| $$ \\$$$$")
	print ("   | $$ | $$__/ $$| $$__/ $$| $$       | $$  | $$| $$__| $$| $$__| $$")
	print ("   | $$  \\$$    $$ \\$$    $$| $$ ______| $$  | $$ \\$$    $$ \\$$    $$")
	print ("    \\$$   \\$$$$$$   \\$$$$$$  \\$$|      \\$$   \\$$  \\$$$$$$   \\$$$$$$ ")
	print ("                                 \\$$$$$$                             ")
	print (" Progetto di TECNICHE AUTOMATICHE PER LA CORRETTEZZA DEL SOFTWARE| Tool_AGG | UNISA | Dicembre 2020")
	print (" Si ringrazia il Professore Salvatore La Torre per aver fornito il tool Lazy-Cseq-2.0")
	print (" Studenti: G.Adinolfi | G.D'Amore | A.Golino ")
	print ("")
	print ("Eseguire il tool all'interno della cartella workspace, usando il seguente comando, specificando l'opzione:")
	print ("	python3 Test.py <input.c> [opzione]")
	print ("")
	print ("Digitare una delle seguenti opzioni:")
	print ("	--R       [Min_Push][Max_Push][Min_Pop][Max_Pop][Min_Thread][Max_Thread][Round]  Random")
	print ("	--S       [Push][Pop][Thread][Round]                                             Esaustivo")
	print ("	--M       [Push][Pop][Thread][Stringa][Round]                                    Manuale")
	print ("	--R --E   [Min_Push][Max_Push][Min_Pop][Max_Pop][Min_Thread][Max_Thread][Round]  Random-Esaustivo")
	print ("	--E --R   [Push][Pop][Thread][Round]                                             Esaustivo-Random")
	print ("")
	print ("Errore: input non inserito correttamente, inserire uno tra i comandi validi.")
	print ("Per ulteriori errori consulta il file README")
	