#!/usr/bin/python3
#import shutil
#shutil.copy("prova.c","pippo.c")

fd = open("no_atomico.c","r").readlines()
fd2 = open("no_atomico_assert.c","w")
dim = len(fd)
flag = 0

for i in range(len(fd)):

#  if fd[i]=='int main() {\n'  :
  if fd[i].find("main") >= 0  :
    for a in range(i,len(fd)):
      if fd[a]=='\treturn 0; \n':
        fd2.write("\tassert(0);\n"+ fd[a])
        print("\tassert(0);\n"+ fd[a],end='')
      else:
        fd2.write(fd[a])
        print(fd[a],end='')
        if a==(dim-1):
            flag=1
  else:
    if(flag==0):
        fd2.write(fd[i])
        print(fd[i],end='')
        

