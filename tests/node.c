#include <stdio.h>
#include <assert.h>
#include "../headers/node.h"

int main(void) {

	char* TEST_INPUT = "test_value";

	// Test creation of an empty node
	node* newNode = node_createEmptyNode();
	assert(newNode->next == NULL);
	fprintf(stdout, "node_createEmptyNode() creates new node with empty 'next' value\n");
	assert(newNode->word == NULL);
	fprintf(stdout, "node_createEmptyNode() creates new node with empty 'word' value\n");

	// Test creation of a filled node
	node* newNode2 = node_createFilledNode(TEST_INPUT);
	assert(newNode2->next == NULL);
	fprintf(stdout, "node_createFilledNode() creates new node with empty 'next' value\n");
	assert(newNode2->word == TEST_INPUT);
	fprintf(stdout, "node_createFilledNode() creates new node with filled 'word' value\n");

	// Test addLast()

	// Instantiate empty node head and tail pointers
	node* head = NULL;
	node* tail = NULL;

	// Test
	node* addedNode = node_addLast(&head, &tail, TEST_INPUT);
	assert(head == addedNode);
	fprintf(stdout, "node_addLast() creates new node and assigns head pointer properly\n");
	assert(tail == addedNode);
	fprintf(stdout, "node_addLast() assigns tail pointer to added node correctly\n");
	assert(head->word == TEST_INPUT);
	fprintf(stdout, "node_addLast() assigns new 'word' value properly\n");

	return 0;

}