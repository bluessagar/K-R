/* Write a program that prints its input one word per line. */

#include <stdio.h>

void main( void )
{

	int c;

	while( ( c = getchar() ) != EOF )
	{
		if( c == ' ' || c == '\t' )
			putchar('\n');
		else
			putchar(c);
	}

	printf("\nEnd of the program.\n");
}


