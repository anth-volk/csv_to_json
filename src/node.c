#include <stdlib.h>
#include <string.h>

// Function to create empty node
node* node_createEmptyNode(void) {

	node* newNode = malloc(sizeof(node));
	return newNode;

}

// Function to create pre-filled node
node* node_createFilledNode(char* input) {

	node* newNode = node_createEmptyNode();
	if (strlen(input) > 0) {
		strcpy(newNode->word, input);
	}

	return newNode;

}

// Function to create empty node and add as last
// element of existing linked list
node* node_addLast(node** head_ref, node** tail_ref, char* input) {

	node* newNode = node_createEmptyNode();
	newNode->word = input;

	// If list is empty, set head and tail to point to 
	// new node
	if (*head_ref == NULL && *tail_ref == NULL) {
		(*head_ref)->next = newNode;
		(*tail_ref)->next = newNode;
	}

	else {
		// Point the current tail to the new element
		(*tail_ref)->next = newNode;

		// Point tail itself to new element
		*tail_ref = newNode;

	}

	// Return the pointer to the new node for testing purposes
	return newNode;

}