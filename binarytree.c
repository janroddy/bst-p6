#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "binarytree.h"
#include "node.h"


void initialize(binary_tree* bt) {
	bt->root = NULL; 
	bt->size = 0; 
}

bool search(binary_tree* bt, int key) {
	
}

void insert(binary_tree* bt, int item) {

}
void printinorder(binary_tree* bt) {
	node* root=bt->root;

	if (root == NULL) {
        return;
	}

    printinorder(root->left);
    printf("%d ", root->data);
	printinorder(root->right);
}

void printpreorder(binary_tree* bt) {

}
void printpostorder(binary_tree* bt) {

}
int btsize(binary_tree* bt) {

}
int treeheight(binary_tree* bt){

} 
