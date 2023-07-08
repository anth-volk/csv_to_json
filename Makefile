# Define C compiler
$(CC) = gcc

outfile:
	$(CC) src/main.c src/errorTesting.C

clean:
	rm *.o $(outfile)