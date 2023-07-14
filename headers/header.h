#include <stdbool.h>

// node typedef
typedef struct node {
	char* word;
	struct node* next;
}
node;

// From errorTesting.c
bool errorTestArgc(int argc);
bool errorTestFile(char* arg, char option);
int errorExit(char* message, int errorCode);

// From utils.c
char* strInitCpy(char* string);

// From csvReading.c

// From node.c
node* node_createEmptyNode(void);
node* node_createFilledNode(char* input);
