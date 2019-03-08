#ifndef NODE_H
#define NODE_H

#include <stdbool.h>

typedef struct node_struct {
	int data;
	struct node_struct *left;
	struct node_struct *right;
} node;

void printNode(node *n); 
node* newNode(int data); 

#endif 
