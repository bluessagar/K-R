/* Program to count blanks, tabs and new lines in given para. */

#include <stdio.h>

void main( void )
{
	int nb = 0, nl = 0, nt = 0;
	char c;

	printf("Program to count blanks, tabs and new lines in given para.\nEnter you paragraph, press Ctrl+D when done:\n ");

	while( ( c = getchar() ) != EOF )
	{
		if( c == '\n' )
			nl++;
		else if( c == ' ' )
			nb++;
		else if( c = '\t' )
			nt++;
	}

	printf("\n Blanks = %d, Tabs = %d, New Lines = %d\n", nb,nt,nl);

	
}


