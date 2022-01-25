#include <stdio.h>

// Prototype declaration
int ftoc(int);

// Print F -> C conversion table
int main(){

	int fahr;
	int lower, upper, step;

	// Numerical values to use in the table
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	// Printing sequence

	printf("Farenheit:	Celcius:\n");
	while(fahr <= upper){
		printf("%d\t\t%d\n", fahr, ftoc(fahr));
		fahr = fahr + step;
	}
	return 0;
}

// Takes farenheit temp and returns C conversion
int ftoc(int fahr){
	int celcius = 5 * (fahr - 32) / 9;
	return celcius;
}