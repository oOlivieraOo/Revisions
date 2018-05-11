CC=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=monAppareilRun

all: $(EXEC)

monAppareilRun: appareil.o collAppareil.o main.o
	$(CC) -o monAppareilRun appareil.o collAppareil.o main.o $(LDFLAGS)
appareil.o: appareil.cpp
	$(CC) -o appareil.o -c appareil.cpp $(CFLAGS)
collAppareil.o: collAppareil.cpp
	$(CC) -o collAppareil.o -c collAppareil.cpp $(CFLAGS)

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
