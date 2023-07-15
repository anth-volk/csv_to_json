#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// A function to both initialize a string and fill 
// string with pre-determined string; returns char*
char* strInitCpy(char* string) {

	// Determine length of string
	int stringLength = strlen(string);

	// Initiate pointer for output string
	// and allocate based on stringLength
	char* output = calloc(stringLength + 1, sizeof(char));

	// Copy string to output
	strcpy(output, string);

	// Return final pointer
	return output;

}