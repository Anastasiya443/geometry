all:program
program:main.o fc.o ft.o
	gcc -g -Wall -Werror main.o fc.o ft.o -o program.exe -lm
*.o:*.c
	gcc -Wall -Werror -c *.c
run:
	./program.exe
clean:
	rm -rf *.o *.exe main
