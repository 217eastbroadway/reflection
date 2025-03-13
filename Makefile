reflection.exe: main.o
	gcc main.o -Llib -Iinclude -lbz2 -o bin/reflection.exe

main.o: src/main.c
	gcc src/main.c -c -Iinclude