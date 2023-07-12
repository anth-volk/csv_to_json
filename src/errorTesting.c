#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../headers/header.h"

// Number of arguments to be input by user
const int NUM_OF_ARGS = 2;

// Default infile format data
const int INFILE_EXT_LEN = 4;
const char* INFILE_FORMAT = ".csv";

// Test to make sure argc is correct number
bool errorTestArgc(int argc) {
	// Add one here because arg 0 is the program invocation itself
	if (argc != (NUM_OF_ARGS + 1)) {
		return false;
	}

	return true;
}

// Test to make sure infile address is formatted correctly
bool errorTestFile(char* arg, char* option) {

	// Create two empty vars for vals dependent upon "option"
	int ext_len = 0;
	char* file_format = NULL;

	if (strcasecmp(option, "infile") == 0) {
		ext_len = INFILE_EXT_LEN;
		file_format = (char*)calloc(INFILE_EXT_LEN + 1, sizeof(char));
	}

	// If arg doesn't exist, return false
	if (!arg) {
		return false;
	}

	// Obtain arg's length
	const int argLength = strlen(arg);

	// If arg is too short, return false
	if (argLength < INFILE_EXT_LEN) {
		return false;
	}

	// Copy the end of the arg to a new value
	char extension[INFILE_EXT_LEN + 1];
	const int index = argLength - INFILE_EXT_LEN;
	strcpy(extension, &arg[index]);

	// If the end of the arg is not the extension,
	// return false
	if (strcasecmp(INFILE_FORMAT, extension) != 0) {
		return false;
	}

	return true;

}