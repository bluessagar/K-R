/* This is section 1.5.2 Character counting */

#include <stdio.h>

void main( void )
{
	long number = 0;
	printf("\nProgram to count characters, Please enter your input(Press Ctrl + D when you are finished) : \n");
	while( getchar() != EOF )
		number++;	
	printf("\nNumber of characters in the input string: %ld\n", number);
}



