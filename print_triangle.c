#include "print_triangle.h"

void print_triangle(int Level)
{
	//initialize value of i,j,k
	int i = 0, j = 0, k = 0;
	//print upper case
	for (i = 1; i <= Level; i++)
	{
		for (j = 1; j <= i; j++) { output_text(); }
		printf("\n");
	}
	//print midden case
	for (i = 1; i <= Level + 1; i++) {
		output_text();
	}
	printf("\n");
	//print lower case
	for (i = Level; i >= 1; i--) {
		for (k = 1; k <= i; k++) { output_text(); }
		printf("\n");
	}

}
