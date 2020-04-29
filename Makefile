all:bin/program
bin/program:build/main.o build/fc.o build/ft.o
	gcc -Wall -Werror -Wextra build/main.o build/fc.o build/ft.o -o bin/program -lm
build/fc.o:src/fc.c
	gcc -Wall -Werror -c src/fc.c -o build/fc.o
build/main.o:src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
build/ft.o:src/ft.c
	gcc -Wall -Werror -c src/ft.c -o build/ft.o
run:
	./bin/program
clean:
	rm -rf build/*.o bin/program
