# Define C compiler
CC = gcc

# Define outfile name
outfile = outfile

outfile:
	$(CC) src/main.c src/errorTesting.c -o $(outfile)

clean:
	rm *.o *.out $(outfile)