all:program
program:main.o fc.o ft.o
	gcc -g -Wall -lm main.o fc.o ft.o -o program.exe
*.o:*.c
	gcc -c *.c
clean:
	rm -rf *.o *.exe
