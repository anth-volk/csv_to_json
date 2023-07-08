#include <stdio.h>
#include "../headers/header.h"

// Main function
int main(int argc, char* argv[]) {

	// Program will take two args: an infile and an outfile

	// Throw error if user doesn't input both infile and outfile
	if (!errorTestArgc(argc)) {
		printf("Program requires two arguments: a CSV-formatted infile and a JSON-formatted destination\n");
		return 1;
	}

	// Throw error if infile isn't of type 'csv'
	if (!errorTestInfile(argv[0])) {
		printf("Program requires a CSV-formatted infile as the first argument, including the .csv extension\n");
		return 2;
	}

	// Throw error if outfile isn't of type 'json'

	// Attempt to open infile

	// If unable to open infile, crash

	// Attempt to open outfile

	// If unable to open outfile, crash

	// Set up file reader with delimiter

	// Read first line into memory and store as an array

	// For each next successive line, until EOF...
		// Print key:value, using relevant tag from array as key, so long as key and value exist, else skip

	// Close file

	// Free any heap-allocated memory

	// Print success message

	// Exit


}