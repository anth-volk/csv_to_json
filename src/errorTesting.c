#include <stdbool.h>
#include <string.h>
#include "../headers/header.h"

// Number of arguments to be input by user
const int NUM_OF_ARGS = 2;

// Default infile format data
const int INFILE_EXT_LEN = 4;
const char INFILE_FORMAT[] = ".csv";

// Test to make sure argc is correct number
bool errorTestArgc(int argc) {
	// Add one here because arg 0 is the program invocation itself
	if (argc != (NUM_OF_ARGS + 1)) {
		return false;
	}

	return true;
}

// Test to make sure infile address is formatted correctly
bool errorTestInfile(char* arg) {

	// If arg doesn't exist, return false
	if (!arg || !(*arg)) {
		return false;
	}

	// Obtain arg's length
	const int argLength = strlen(arg);

	// If arg is too short, return false
	if (argLength < INFILE_EXT_LEN) {
		return false;
	}

	// If the end of the arg is not the extension,
	// return false
	if (!strcasecmp(strrchr(arg, '\0' - INFILE_EXT_LEN), INFILE_FORMAT)) {
		return false;
	}

	return true;

}