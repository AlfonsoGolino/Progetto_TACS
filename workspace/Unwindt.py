#!/usr/bin/python3
import fileinput
import sys

file_name = sys.argv[3]
max_pop = int(sys.argv[1])
max_push = int(sys.argv[2])
max_tread = int(sys.argv[4])
tread_name = ""
i=1
for i in range(1,max_tread):
	tread_name += "\n"+"	pthread_t threads"+str(i)+";"

tread_create = ""
i=0
for i in range(0,max_tread):
	tread_create += "\n"+"    pthread_create(&threads"+str(i)+", NULL, worker,"+str(i+1)+");"

tread_join = ""
i=1
for i in range(1,max_tread):
	tread_join += "\n"+"	pthread_join(threads"+str(i)+", NULL);"

stringa_bin = sys.argv[5]
i = 0
push_array = 0
pop_array = 0
mix = ""
conto_pop = 0
for i in range(len(stringa_bin)):
	if(stringa_bin[i] == '1'):
		mix += "\n"+" lstack_push(&results, valore["+str(push_array)+"] + ((thread - 1) * 10));"
		push_array+=1
		conto_pop += 1
	if(stringa_bin[i] == '0'):
		mix +=  "\n"+"valore_restituito["+str(pop_array)+"] = lstack_pop(&results);"
		pop_array+=1
		conto_pop -=1

i = 0
init_int = max_push * max_tread + 2
init = ""
for i in range(0,init_int):
	init += "lstack->node_buffer["+str(i)+"].next = lstack->node_buffer +"+str(i+1)+";"+"\n"

i = 0
array_thread = ""
for i in range(0,max_tread):
	array_thread += "int _agg_t"+str(i+1)+"[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};"+"\n"

i = 0
prendo_pop_main = ""
indice_thread = ""
if_main_1 = ""
i = 0
for i in range(max_tread):
	indice_thread += "int i"+str(i+1)+" = 0;"+"\n"
if(conto_pop > 0 ):
	i = 0
	conto_pop = conto_pop*max_tread
	for i in range(conto_pop):
		prendo_pop_main += "int _agg_e"+str(i+1)+" = lstack_pop(&results);"+"\n"
	i = 0
	k = 0
	for i in range(conto_pop):
		k = 0
		for k in range(max_tread):
			if_main_1 += "if((_agg_e"+str(i+1)+" >= "+str(1 + (k*10))+" && _agg_e"+str(i+1)+" <= "+str(10 + (k*10))+")){\n"
			if_main_1 += "_agg_t"+str(k+1)+"[i"+str(k+1)+"] = _agg_e"+str(i+1)+";\n"
			if_main_1 += "i"+str(k+1)+"++;\n"
			if_main_1 += "}\n"
	


for line in fileinput.FileInput(file_name, inplace=1):
	if "#define max_size" in line:
		line = line.rstrip()
		line = line.replace(line,"#define max_size"+" "+str(init_int)+"\n")

	if "lstack->node_buffer[i].next = lstack->node_buffer + i + 1;" in line:
		line = line.rstrip()
		line = line.replace(line,init)

	if "  lstack_push(results, valore[0] + ((thread - 1) * 10));" in line:
		line = line.rstrip()
		line = line.replace(line,mix+"\n")

	if "	int _agg_t1[10];" in line:
		line = line.rstrip()
		line = line.replace(line,array_thread+"\n")

	if "	pthread_t threads0;" in line:
		line = line.rstrip()
		line = line.replace(line,line+tread_name+"\n")

	if "	pthread_create(&threads0, NULL, worker, 1);" in line:
		line = line.rstrip()
		line = line.replace(line,tread_create+"\n")

	if "	pthread_join(threads0, NULL);" in line:
		line = line.rstrip()
		line = line.replace(line,line+tread_join+"\n")

	if "	int _agg_e1 = lstack_pop(&results);" in line:
		line = line.rstrip()
		line = line.replace(line,prendo_pop_main)

	if "	int i = 0;" in line:
		line = line.rstrip()
		line = line.replace(line,indice_thread)

	if "	if((_agg_e1 >= 1 && _agg_e1 <= 10)){" in line:
		line = line.rstrip()
		line = line.replace(line,if_main_1)


	print(line, end="")