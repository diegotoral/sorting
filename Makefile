CC=g++
CFLAGS=-Wall -c
EXECUTABLE=sorting


all: $(EXECUTABLE)

sorting: main.o selection-sort.o quick-sort.o insertion-sort.o bubble-sort.o
	$(CC) main.o selection-sort.o -o $(EXECUTABLE)

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

selection-sort.o: src/selection-sort.h src/selection-sort.cpp
	$(CC) $(CFLAGS) src/selection-sort.cpp

quick-sort.o: src/quick-sort.h src/quick-sort.cpp
	$(CC) $(CFLAGS) src/quick-sort.cpp

insertion-sort.o: src/insertion-sort.h src/insertion-sort.cpp
	$(CC) $(CFLAGS) src/insertion-sort.cpp

bubble-sort.o: src/bubble-sort.h src/bubble-sort.cpp
	$(CC) $(CFLAGS) src/bubble-sort.cpp

clean:
	rm $(EXECUTABLE) *o
