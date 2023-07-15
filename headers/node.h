// node typedef
typedef struct node {
	char* word;
	struct node* next;
}
node;

// From node.c
node* node_createEmptyNode(void);
node* node_createFilledNode(char* input);
node* node_addLast(node** head_ref, node** tail_ref, char* input);