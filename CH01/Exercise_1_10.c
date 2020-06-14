/* Program to show special characters \t \b and \\*/

#include <stdio.h>

void main( void )
{
	printf("Program to show special characters \\t \\b and \\.\n");
	
	char c; 
	while( ( c = getchar() ) != EOF )
	{
		if( c == '\t' )
		{
			putchar('\t');
			/*putchar('\')*/
		}
		else if( c == '\b' )
			putchar('\b');
		else if( c == '\\' )
			putchar('\\');
		else
			putchar(c);
	}

	printf("\nThank you! \n");
}


