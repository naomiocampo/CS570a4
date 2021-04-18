##Naomi Ocampo
##CS570, S21
##A04
CC = g++
CFLAGS = -Wall -c -g
LFLAGS = -lpthread -lrt
TARGET = mizzo

all: $(TARGET)

$(TARGET): main.o conveyorbelt.o consumers.o producers.o io.o
	$(CC) main.o conveyorbelt.o consumers.o producers.o io.o -o $(TARGET) $(LFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

conveyorbelt.o: conveyorbelt.cpp conveyorbelt.h
	$(CC) $(CFLAGS) conveyorbelt.cpp

consumers.o: consumers.cpp consumers.h
	$(CC) $(CFLAGS) consumers.cpp

producers.o: producers.cpp producers.h
	$(CC) $(CFLAGS) producers.cpp

io.o: io.c io.h production.h
	$(CC) $(CFLAGS) io.c

clean:
	rm -f core *.o $(TARGET)
