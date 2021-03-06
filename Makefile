CC=g++
CFLAGS=-Wall -std=c++11 -c
EXECUTABLE=sorting


all: $(EXECUTABLE)

sorting: main.o
	$(CC) utils.o rectangle.o main.o -o $(EXECUTABLE)

main.o: utils.o src/main.cpp rectangle.o selection-sort.o quick-sort.o insertion-sort.o bubble-sort.o utils.o
	$(CC) $(CFLAGS) src/main.cpp

utils.o: src/utils.h src/utils.cpp
	$(CC) $(CFLAGS) src/utils.cpp

rectangle.o: src/rectangle.h src/rectangle.cpp
	$(CC) $(CFLAGS) src/rectangle.cpp

selection-sort.o: src/selection-sort.h src/selection-sort.cpp utils.o
	$(CC) $(CFLAGS) src/selection-sort.cpp

quick-sort.o: src/quick-sort.h src/quick-sort.cpp utils.o
	$(CC) $(CFLAGS) src/quick-sort.cpp

insertion-sort.o: src/insertion-sort.h src/insertion-sort.cpp utils.o
	$(CC) $(CFLAGS) src/insertion-sort.cpp

bubble-sort.o: src/bubble-sort.h src/bubble-sort.cpp utils.o
	$(CC) $(CFLAGS) src/bubble-sort.cpp

clean:
	rm $(EXECUTABLE) *o
