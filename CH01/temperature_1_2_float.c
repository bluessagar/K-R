
/* This is the second program from K&R section 1.2
 * it uses float data type for teperature variables 
 * instead of integers as in prior program */






#include <stdio.h>

void main( void )
{
	float fahr, celsius;
	int range_begin, range_end, range_step;

	range_begin = 0;
	range_end = 300;
	range_step = 20;

	fahr = range_begin;

	while( fahr <= range_end )
	{
		celsius = (5.0/9.0)*(fahr - 32.0);
		printf("\t%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + range_step;
	}
}


