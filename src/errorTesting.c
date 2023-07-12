#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../headers/header.h"

// Number of arguments to be input by user
const int NUM_OF_ARGS = 2;

// Default file extensions
const char* INFILE_EXT = ".csv";
const char* OUTFILE_EXT = ".json";

// Test to make sure argc is correct number
bool errorTestArgc(int argc) {
	// Add one here because arg 0 is the program invocation itself
	if (argc != (NUM_OF_ARGS + 1)) {
		return false;
	}

	return true;
}

// Test to make sure infile address is formatted correctly
bool errorTestFile(char* arg, char option) {

	// Possible "option" values for this function: "i" or "o"

	// If arg doesn't exist, return false
	if (!arg) {
		return false;
	}

	// Initiate variable to be altered based on "option"
	char* ext = NULL;
	int ext_len = 0;

	switch(option) {
		case 'i':
		case 'I':
			ext_len = strlen(INFILE_EXT);
			ext = calloc(ext_len + 1, sizeof(char));
			strcpy(ext, INFILE_EXT);
			break;
		case 'o':
		case 'O':
			ext_len = strlen(OUTFILE_EXT);
			ext = calloc(ext_len + 1, sizeof(char));
			strcpy(ext, OUTFILE_EXT);
			break;
	}

	// Obtain arg's length
	const int argLength = strlen(arg);

	// If arg is too short, return false
	if (argLength < ext_len) {
		return false;
	}

	// Copy the end of the arg to a new value
	char extension[ext_len + 1];
	const int index = argLength - ext_len;
	strcpy(extension, &arg[index]);

	// If the end of the arg is not the extension,
	// return false
	if (strcasecmp(ext, extension) != 0) {
		return false;
	}

	return true;

}