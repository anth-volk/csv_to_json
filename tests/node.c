#include <stdio.h>
#include <assert.h>
#include "../headers/node.h"

int main(void) {

	char* TEST_INPUT = "test_value";

	// Test creation of an empty node
	node* newNode = node_createEmptyNode();
	assert(newNode->next == NULL);
	printf("node_createEmptyNode() creates new node with empty 'next' value");
	assert(newNode->word == NULL);
	printf("node_createEmptyNode() creates new node with empty 'word' value");

	// Test creation of a filled node
	node* newNode2 = node_createFilledNode(TEST_INPUT);
	assert(newNode->next == NULL);
	printf("node_createFilledNode() creates new node with empty 'next' value");
	assert(newNode->word == TEST_INPUT);
	printf("node_createFilledNode() creates new node with filled 'word' value");

	// Test addLast()

	// Instantiate empty node head and tail pointers
	node* head = NULL;
	node* tail = NULL;

	// Test
	node* addedNode = node_addLast(&head, &tail, TEST_INPUT);
	assert(head == addedNode);
	printf("node_addLast() creates new node and assigns head pointer properly");
	assert(tail == addedNode);
	printf("node_addLast() assigns tail pointer to added node correctly");
	assert(head->word == TEST_INPUT);
	printf("node_addLast() assigns new 'word' value properly");

	return 0;

}