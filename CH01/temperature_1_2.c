/* This is second program, from K&R. 
 * Section 1.2 for temperature conversion */
#include <stdio.h>

void main ( void )
{
	int fahr, celsius;
	int range_begin, range_end, range_step;

	range_begin = 0;
	range_end = 300;
	range_step = 20;

	fahr = range_begin;

	while( fahr <= range_end )
	{
		celsius = (5 * (fahr - 32)/9);
		printf("\t %3d \t %6d\n", fahr, celsius );
		fahr = fahr + range_step;
	}
}


