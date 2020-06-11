/* Modify temperature program to print a heading above the table */

#include <stdio.h>

void main( void )
{
	float far, cel;
	int begin = 0, step = 20, end = 300;

	far = begin;
	
	printf("\tCelcius\tFahrenheit\n");
	while( far <= end )
	{
		cel = (5.0/9.0)*(far - 32.0);
		printf("\t%3.0f\t%8.3f\n", far, cel );
		far = far + step;
	}

}


