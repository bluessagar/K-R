/* Excercise 1.4: Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

void main( void )
{
	float cel, far;
	int begin = -20, end = 160, step = 20;

	cel = begin;

	printf("\tFahrenheit\tCelcius\n");

	while( cel <= end )
	{
		far = (9.0/5.0)*cel + 32;
		printf("\t%8.2f\t%3.2f\n", cel, far);
		cel = cel + step;
	}

}


