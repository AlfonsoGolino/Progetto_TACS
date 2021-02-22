#!/usr/bin/python3
import sys
push=int(sys.argv[2])
pop=int(sys.argv[1])
lunghezza=push+pop

fattoriale=1
app=lunghezza
for x in range(1, lunghezza):
  fattoriale*=app
  app-=1
  

valore=1
c = 0
no =True
stringa_bash = ""
for x in range(0, fattoriale):
	stringa=bin(valore)
	if((stringa.count('1')==push) and (stringa.count('0')==pop+1)): 
		stringa1 = stringa[2:]
		for i in range(len(stringa1)):
			if(stringa1[i] == '1'):
				c+=1
			if(stringa1[i] == '0'):
				c-=1
			if(c < 0):
				no = False

		if(no):
			stringa_bash += stringa1+" "
		no = True

		c = 0
			
	valore+=1
   
print(stringa_bash)