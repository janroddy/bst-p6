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
	node* cur; 
	cur = (node*)malloc(sizeof(node)); 
	cur = bt->root;
	
	while (cur != NULL) {

		if (key == cur->data){
			return true;  
		}
		//visit the left child, repeat
		else if (key < cur->data) {
			cur = cur->left; 
		}
		//visit the right child, repeat
		else {
			cur = cur->right; 
		}
	}
	printf("binary_tree is empty.");
	return false; 	
}

void insert(binary_tree* bt, int item) {
	node* nodeInsert = NULL; 
	node* cur = NULL; 
	nodeInsert = newNode(item); 
	nodeInsert->left = NULL;
	nodeInsert->right = NULL; 
	
	if (bt->root == NULL) {
		bt->root = nodeInsert; 
	}
	else {
		cur = bt->root; 
		while (cur != NULL) {
			if (nodeInsert->data < cur->data) {
				if (cur->left == NULL){
					cur->left = nodeInsert;
					cur = NULL; 
				}
				else {
					cur = cur->left; 
				} 
			}
			else {
				if (cur->right == NULL){
					cur->right = nodeInsert;
					cur = NULL; 
				}
				else {
					cur = cur->right; 
				}
			}
		}
	}
	bt->size++;
}

void printinorder(binary_tree* bt) {
	node* curr = bt->root;

	if (curr == NULL) {
        return;
	}

    printinorder(curr->left); //FIXME.can't recursive because it need to pass a tree
    printf("%d ", curr->data);
	printinorder(curr->right); //FIXME.can't recursive because it need to pass a tree
}

void printpreorder(binary_tree* bt) {
	node* curr = bt->root;

	if (curr == NULL) {
        return;
	}

    printf("%d ", curr->data);
    printpreorder(curr->left); //FIXME.can't recursive because it need to pass a tree
	printpreorder(curr->right); //FIXME.can't recursive because it need to pass a tree
}

void printpostorder(binary_tree* bt) {
	node* curr = bt->root;

	if (curr == NULL) {
        return;
	}

    printpostorder(curr->left); //FIXME.can't recursive because it need to pass a tree
	printpostorder(curr->right); //FIXME.can't recursive because it need to pass a tree
	printf("%d ", curr->data);

}

int btsize(binary_tree* bt) {
	return bt->size;
}

int treeheight(binary_tree* bt){

} 

