/* This is section 1.5.2 Character counting Version 2*/

#include <stdio.h>

void main( void )
{
	double number = 0;
	printf("\nProgram to count characters with \"for\" loop, Please enter your input(Press Ctrl + D when you are finished) : \n");
	for( number = 0; getchar() != EOF ; number++ );
	printf("\nNumber of characters in the input string: %.0f\n", number);
}



