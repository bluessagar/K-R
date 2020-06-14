/* Histogram assignment */

#include <stdio.h>

#define	IN		1
#define OUT		0
#define MAX_WORD_LEN	10	/* We are considering the maximum length of a word in given input is 10 */


void main( void )
{
	printf("\nProblem Statment:  Write a program to print histogram of the lengths of words in its input.(With Horizontal bars)");
	printf("\nEnter your input (Press Ctrl+D when finished):\n");

	int c, current_word_len = 0;
	int length[MAX_WORD_LEN];

	/* Initialize the array to all zeros first */
	for( int i = 0; i < MAX_WORD_LEN ; i++ )
	{
		length[i] = 0;
	}

	/* Parse the input one by one now */
	while( ( c = getchar() ) != EOF )	
	{
		if( c == ' ' || c == '\t' || c == '\n' )	
		{ /* We have detected a break, so reset the world length count */

			length[current_word_len-1]++;
			current_word_len = 0;	
		}
		else if( c == '\b' )
		{
			current_word_len--;
		}
		else if( c == '.' || c == '!' || c == '?' )
		{
			/* Simply ignore them.*/
		}
		else
		{
			current_word_len++;
		}

	}

	if( current_word_len != 0 )
	{
		/* User has pressed EOF without pressing space, tab or enter.*/
		length[current_word_len-1]++;
	}

	printf("\nResults:\n");
	for( int i = 0; i < MAX_WORD_LEN ; i++)
	{
		printf("Words of length %d = %d.\n", i+1, length[i] );
	}

	/* Printing the Horizontal Histogram */
	printf("\n\tLengths ^");
	printf("\n\t\t|");

	for(int i = MAX_WORD_LEN ; i > 0 ; i-- )
	{
		printf("\n\t%d\t|",i );

		for( int j = 0 ; j < length[i-1] ; j++ )
			printf("*");
	}

	printf("\n\t\t--------------------------------------->");
	printf("\n\t\t words ");
	printf("\n\t Histogram of 'Lengths of the words'.");
	printf("\n");
}





