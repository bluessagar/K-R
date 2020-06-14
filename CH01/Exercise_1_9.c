/* Program to replace space stream with single space. */

#include <stdio.h>

void main( void )
{
	printf("Program to replace space stream with single space (Press Ctrl+D to finish).\n ");

	int blank_count = 0;
	char c;

	while( ( c = getchar()) != EOF )
	{
		if( c == ' ' )
		{
			blank_count++;
			if( 1 == blank_count )
				putchar(c);
		}
		else
		{
			blank_count = 0;
			putchar(c);
		}

	}

	printf("\nThank you.\n");

}
	
