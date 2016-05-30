logo: logo.o main.o
	gcc -o logo logo.o main.o -lm -lSDL -lSDL_image -lSDL_ttf

logo.o: logo.c
	gcc -o logo.o -c logo.c -lm -lSDL -lSDL_image -lSDL_ttf

main.o: main.c logo.h
	gcc -o main.o -c main.c -lm -lSDL -lSDL_image -lSDL_ttf
