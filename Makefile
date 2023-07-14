# Define C compiler
CC = gcc

# Define outfile name
outfile = outfile

clean:
	rm -f *.o *.out $(outfile)
	rm -rf outfile.dSYM
	rm -rf headers/header.h.gch

debug: clean
	$(CC) src/main.c src/errorTesting.c src/utils.c src/csvReading.c src/node.c -ggdb -o $(outfile)

final: clean
	$(CC) src/main.c src/errorTesting.c src/utils.c src/csvReading.c src/node.c -o $(outfile)
