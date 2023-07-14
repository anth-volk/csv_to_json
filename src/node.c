#include <stdlib.h>
#include <string.h>
#include "../headers/header.h"

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

// This is to be rewritten heavily

// Function to create empty node and add as last
// element of existing linked list
void node_addLastEmpty(node** head_ref, node** tail_ref) {

	node* newNode = node_createEmptyNode();

	// If list is empty, set head and tail to point to 
	// new node
	if (*head_ref == NULL && *tail_ref == NULL) {
		*head_ref->next = newNode;
		*tail_ref->next = newNode;
	}

	else {
		// Point tail's next to new element
		(*tail_ref)->next = newNode;

		// Move tail pointer
		(*tail_ref)->next = (*tail_ref)->next->next;


	}

}