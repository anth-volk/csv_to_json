#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include "../headers/header.h"

// Main function
int main(int argc, char* argv[]) {

	// Program will take two args: an infile and an outfile

	// INITIAL ERROR TESTING

	// Throw error if user doesn't input both infile and outfile
	if (!errorTestArgc(argc)) {
		return errorExit("Program requires two arguments: a CSV-formatted infile and a JSON-formatted destination\n", 1);
	}

	// Declare variables for infile and outfile addresses
	char* infileAddr = strInitCpy(argv[1]);

	char* outfileAddr = strInitCpy(argv[2]);

	// Throw error if infile isn't of type 'csv'
	if (!errorTestFile(infileAddr, 'i')) {
		return errorExit("Program requires a CSV-formatted infile as the first argument, including the .csv extension\n", 2);
	}

	// Throw error if outfile isn't of type 'json'
	if (!errorTestFile(outfileAddr, 'o')) {
		return errorExit("Program requires a JSON-formatted outfile as the second argument, including the .json extension\n", 3);
	}

	// FILE CREATION AND OPENING

	// Create pointers for infile and outfile
	FILE* infilePtr;
	FILE* outfilePtr;

	// Attempt to open infile
	infilePtr = fopen(infileAddr, "r");

	// If unable to open infile, crash
	if (!infilePtr) {
		return errorExit("Error while trying to open infile; please try again later", 4);
	}

	// Attempt to open outfile
	outfilePtr = fopen(outfileAddr, "w");

	// If unable to open outfile, crash
	if (!outfilePtr) {
		return errorExit("Error while trying to open outfile; please try again", 5);
	}

	// Create variables to store read CSV columns
	char* headerRow;
	size_t bufferSize = 0;
	headerRow = malloc(bufferSize * sizeof(char));

	// Read first line into memory
	getline(&headerRow, &bufferSize, infilePtr);

	// Tokenize first line and store as array


	// For each next successive line, until EOF...
		// Print key:value, using relevant tag from array as key, so long as key and value exist, else skip

	// Close file

	// Free any heap-allocated memory

	// Print success message

	// Exit


}