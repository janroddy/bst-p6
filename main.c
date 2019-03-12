#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "binarytree.h"
#include "node.h"

//testing binary_tree construction 
int main () {
	binary_tree bt; 
	bool found;

	initialize(&bt); 

	//output
	printf("Print in order\n");
	printinorder(&bt);
	printf("\nPrint pre order\n");
	printpreorder(&bt);
	printf("\nPrint post order\n");
	printpostorder(&bt);
	printf("\n");
	found = search(&bt,33);
	if (found){
		printf("FOUND 33\n");
	}
	found = search(&bt,38);
	if (found){
		printf("FOUND 38\n");
	}
	printf("Number of elements in tree: %d\n", btsize(&bt));
	printf("Tree height: %d\n", treeheight(bt.root));
	


	

	return 0;

}