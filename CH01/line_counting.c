/* Section 1.5.3 Program for Line Counting. */

#include <stdio.h>

void main( void )
{
	int nl = 0;
	int c;

	printf("Program to count number of new lines in you paragraph. (Press Ctrl+D to exit)");
	while( ( c = getchar() ) != EOF )
		if(c == '\n')
			nl++;
	printf("Number of new lines in para = %d\n", nl);
}


