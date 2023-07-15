#include <stdio.h>
#include <assert.h>
#include "../headers/header.h"

int main(void) {

	char* TEST_INPUT = "test_value";

	// Test creation of an empty node
	node* newNode = node_createEmptyNode();
	assert(newNode->next == NULL);
	assert(newNode->word == NULL);

	// Test creation of a filled node
	node* newNode2 = node_createFilledNode(TEST_INPUT);
	assert(newNode->next == NULL);
	assert(newNode->word == TEST_INPUT);

	// Test addLast()

	// Instantiate empty node head and tail pointers
	node* head = NULL;
	node* tail = NULL;

	// Test
	node* addedNode = node_addLast(&head, &tail, TEST_INPUT);
	assert(head == addedNode);
	assert(tail == addedNode);
	assert(head->word == TEST_INPUT);

	return 0;

}