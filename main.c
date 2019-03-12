#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "binarytree.h"
#include "node.h"

//testing binary_tree construction 
int main (int argc, char* argv[]) {
	// Variable Declarations
	binary_tree bt; 
	bool found;
	int number = 0;

	initialize(&bt);

	// File Handling
	FILE* inFile = NULL; // File pointer
	inFile = fopen(argv[1], "r");

	if (inFile == NULL) {
		printf("Could not open file.\n");
		return -1; // -1 indicates error
	}

	// Read integers from file, add to binary tree
	fscanf(inFile, "%d", &number);
	while (!feof(inFile)) {
		insert(&bt, number);
		fscanf(inFile, "%d", &number);
	}

	// Output
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
	printf("Tree height: %d\n", treeheight(&bt));
	


	

	return 0;

}