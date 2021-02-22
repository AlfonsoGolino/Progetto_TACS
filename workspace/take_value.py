#!/usr/bin/python3
import fileinput
import sys
import numpy as np

file_name = sys.argv[1]
assert_concatenare = " || ("
assert_concatenare_cs = " || ("
max_thread = int(sys.argv[2]) 
array_indici = np.array([0,0,0,0,0,0,0,0,0,0])
primo= True
for line in fileinput.FileInput(file_name, inplace=1):
	if "_agg_e" in line:
		indice = line.index("=")
		valore_sporco = line[indice+1:]
		h = valore_sporco.index(" ")
		valore_num1 = valore_sporco[:h]
		valore_num = int(valore_num1)
		k = 0
		for k in range(max_thread):
			min = 1 + (k*10)
			max = 10 + (k*10)
			if((valore_num >= min) and (valore_num <= max)):
				if(primo):
					assert_concatenare_cs += "__cs_local_main__agg_t"+str(k+1)+"["+str(array_indici[k])+"]=="+str(valore_num)
					assert_concatenare += "_agg_t"+str(k+1)+"["+str(array_indici[k])+"]=="+str(valore_num)
					array_indici[k] += 1 
					primo=False
				else:
					assert_concatenare_cs += " && " 
					assert_concatenare_cs += "__cs_local_main__agg_t"+str(k+1)+"["+str(array_indici[k])+"]=="+str(valore_num)
					assert_concatenare += " && " 
					assert_concatenare += "_agg_t"+str(k+1)+"["+str(array_indici[k])+"]=="+str(valore_num)
					array_indici[k] += 1
					primo=False
	print(line, end="")

if(assert_concatenare == " || ("):
	k = 0
	for k in range(max_thread):
		if(primo):
			primo=False
			assert_concatenare_cs += "__cs_local_main_i"+str(k+1)+"==0 "
			assert_concatenare += "i"+str(k+1)+"==0 "
		else:
			primo=False
			assert_concatenare_cs += " && "
			assert_concatenare_cs += "__cs_local_main_i"+str(k+1)+"==0 "
			assert_concatenare += " && "
			assert_concatenare += " i"+str(k+1)+"==0 "

assert_concatenare += " ));\n"
assert_concatenare_cs += " ));\n"
assert_sorgente=""
file_name1 = sys.argv[3]
for line in fileinput.FileInput(file_name1, inplace=1):
	if "                                        assert" in line:
		j = line.index(");")
		assert_sorgente = line[:j]
		assert_sorgente += assert_concatenare_cs
		line = line.rstrip()
		line = line.replace(line,assert_sorgente)
	print(line, end="")

file_name2 = sys.argv[4]
assert_sorgente=""
for line in fileinput.FileInput(file_name2, inplace=1):
	if "	assert" in line:
		j = line.index(");")
		assert_sorgente = line[:j]
		assert_sorgente += assert_concatenare
		line = line.rstrip()
		line = line.replace(line,assert_sorgente)
	print(line, end="")