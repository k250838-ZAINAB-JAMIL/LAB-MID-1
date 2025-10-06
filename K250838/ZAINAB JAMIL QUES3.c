#include <stdio.h>
int main () {
	int steps;
	int remainingsteps;
	
	printf("Enter the number of steps:");
	scanf(" %d", &steps);
	while (steps == 1) {
		remainingsteps = steps%2;
	}
	printf("The steps are : %d", remainingsteps);
	return 0;
}
