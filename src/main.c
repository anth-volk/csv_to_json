#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Number of arguments to be input by user
const int NUM_OF_ARGS = 2;

// Default infile format data
const int INFILE_EXT_LEN = 4;
const char INFILE_FORMAT[INFILE_EXT_LEN] = ".csv";

// Test to make sure argc is correct number
bool errorTestArgc(argc) {
	if (argc != NUM_OF_ARGS) {
		return false;
	}

	return true;
}

// Test to make sure infile address is formatted correctly
bool errorTestInfile(arg) {

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

	// If the end of the arg is not the extension,
	// return false
	if (!strcasecmp(strrchr(arg, '\0' - INFILE_EXT_LEN), INFILE_FORMAT)) {
		return false;
	}

	return true;

}


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