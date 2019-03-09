myprog.exe : main.o binarytree.o node.o
		gcc main.o binarytree.o node.o -o myprog.exe

main.o : main.c binarytree.h node.h
		gcc -Wall -c main.c

binarytree.o : binarytree.h node.h
		gcc -Wall -c binarytree.c

node.o : node.h
		gcc -Wall -c node.c

clean:
		rm *.o myprog.exe file*
		ls
