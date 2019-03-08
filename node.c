#include <stdio.h>
#include <stdlib.h>

#include "node.h"

void printNode(node *n) {
	printf("%d ", n->data);  
} 

//returns a node pointer with data parameter 
node* newNode(int data) {
	node *returnNode; 
	returnNode = (node*)malloc(sizeof(node)); 
	returnNode->data = data; 
	return returnNode; 
}
