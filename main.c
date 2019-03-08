#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "binarytree.h"
#include "node.h"

//testing binary_tree construction 
int main () {
	binary_tree bt; 
	int i = 5; 

	initialize(&bt); 
	bt.root = newNode(i); 
	printNode(bt.root); 



return 0;

}