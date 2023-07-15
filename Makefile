# Define C compiler
CC = gcc

# Define outfile name
outfile = outfile.out
test_outfile = test_outfile.out

clean:
	rm -f *.o *.out $(outfile)
	rm -rf outfile.out.dSYM
	rm -rf headers/header.h.gch

debug: clean
	$(CC) src/main.c src/errorTesting.c src/utils.c src/csvReading.c src/node.c -ggdb -o $(outfile)

final: clean
	$(CC) src/main.c src/errorTesting.c src/utils.c src/csvReading.c src/node.c -o $(outfile)

test: clean
	$(CC) tests/node.c src/node.c -o $(outfile)

test-debug: clean
	$(CC) tests/node.c src/node.c -ggdb -o $(outfile)