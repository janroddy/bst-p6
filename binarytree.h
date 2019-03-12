#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "node.h"

typedef struct bt_struct {
	int size;
	node* root; 
} binary_tree;

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(node* root); 

#endif 