#ifndef NODE_H
#define NODE_H

typedef struct node_struct {
	int data;
	struct node *left;
	struct node *right;
} node;

void printNode(node *n); 

#endif 
