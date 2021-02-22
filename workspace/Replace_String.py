#!/usr/bin/python3
import fileinput
import sys

string_sub= sys.argv[1]
print(string_sub)
for line in fileinput.FileInput("./benchmark/Bug_Trovati.txt", inplace=1):
	if string_sub in line:
		line = line.rstrip()
		line = line.replace(line,"RISOLTO "+line)
	print(line, end="")