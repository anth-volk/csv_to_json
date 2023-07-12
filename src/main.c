#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "../headers/header.h"

// Main function
int main(int argc, char* argv[]) {

	// Program will take two args: an infile and an outfile

	// INITIAL ERROR TESTING

	// Throw error if user doesn't input both infile and outfile
	if (!errorTestArgc(argc)) {
		printf("Program requires two arguments: a CSV-formatted infile and a JSON-formatted destination\n");
		return 1;
		exit(EXIT_FAILURE);
	}

	// Declare variables for infile and outfile addresses
	char* infileAddr = NULL;
	strcpy(infileAddr, argv[1]);

	char* outfileAddr = NULL;
	strcpy(outfileAddr, argv[2]);

	// Throw error if infile isn't of type 'csv'
	if (!errorTestFile(infileAddr, 'i')) {
		printf("Program requires a CSV-formatted infile as the first argument, including the .csv extension\n");
		return 2;
		exit(EXIT_FAILURE);
	}

	// Throw error if outfile isn't of type 'json'
	if (!errorTestFile(outfileAddr, 'o')) {
		printf("Program requires a JSON-formatted outfile as the second argument, including the .json extension\n");
		return 3;
		exit(EXIT_FAILURE);
	}

	// FILE CREATION AND OPENING

	// Create pointers for infile and outfile
	FILE* infilePtr;
	FILE* outfilePtr;

	// Attempt to open infile
	infilePtr = fopen(infileAddr, "r");

	// If unable to open infile, crash
	if (!infilePtr) {
		fprintf(stderr, "Error while trying to open infile; please try again later");
		return 4;
		exit(EXIT_FAILURE);
	}

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