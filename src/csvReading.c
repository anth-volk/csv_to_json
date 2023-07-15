#include <string.h>
#include <stdlib.h>
#include "../headers/header.h"

char DELIMITER = ',';

// Function to tokenize a line into CSV elements, 
// then return an array
char* lineTokenize(char* line) {

	// Instantiate linked list 
	node* tokenizedLineHead = NULL;
	node* tokenizedLineTail = NULL;

	// Instantiate new node and token
	node* tokenNode = node_createNode();
	char* token;

	// Break off first token and create node from it
	token = strtok(line, &DELIMITER);
	strcpy(tokenNode->word, token);

	// Set head to point to first token
	tokenizedLineHead = tokenNode;

	// Iterate through remaining tokens
	while (token != NULL) {

		// Continue to break off tokens
		token = strtok(NULL, &DELIMITER);



	}




}


// Function that takes key and value array, 
// formats both, and returns a string that 
// represents one object inside the JSON structure

// Function to print starting JSON sequence

// Function to print ending JSON sequence

