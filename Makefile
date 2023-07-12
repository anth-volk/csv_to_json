# Define C compiler
CC = gcc

# Define outfile name
outfile = outfile

clean:
	rm -f *.o *.out $(outfile)
	rm -rf outfile.dSYM

debug: clean
	$(CC) src/main.c src/errorTesting.c -ggdb -o $(outfile)

final: clean
	$(CC) src/main.c src/errorTesting.c -o $(outfile)
