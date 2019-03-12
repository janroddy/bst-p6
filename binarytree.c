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

void inorder(node* curr) {
	if (curr == NULL) {
        return;
	}

    inorder(curr->left);
    printf("%d ", curr->data);
	inorder(curr->right);

}

void printinorder(binary_tree* bt) {
	node* curr = bt->root;
	inorder(curr);

	return;
}

void preorder(node* curr) {
	if (curr == NULL) {
    	return;
	}

    printf("%d ", curr->data);
    preorder(curr->left); 
	preorder(curr->right);
}

void printpreorder(binary_tree* bt) {
	node* curr = bt->root;
	preorder(curr);

	return;
}

void postorder(node* curr) {
	if (curr == NULL) {
        return;
	}

    postorder(curr->left);
	postorder(curr->right);
	printf("%d ", curr->data);
}

void printpostorder(binary_tree* bt) {
	node* curr = bt->root;
	postorder(curr);

	return;
}

int btsize(binary_tree* bt) {
	return bt->size;
}

int treeheight(node* root){
	if(root == NULL){
		return -1;
	}
	/*else if(root->left->data < root->right->data){
		return treeheight(root->left) + 1;
	}
	else{
		return treeheight(root->right) + 1;
	}*/
	else { 
       /* compute the depth of each subtree */
       int lDepth = treeheight(root->left); 
       int rDepth = treeheight(root->right); 
  
       /* use the larger one */
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 

}

