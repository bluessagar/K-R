/* Program to print ranges of char, short, int, long. Both signed and unsigned. 
 * 1. Using standerd header file
 * 2. By comutation
 * 3. floating types.	*/

#include <stdio.h>
#include <limits.h>
#include <math.h>


#define	CHAR_BITS	8U
#define SHORT_BITS	16U
#define	INT_BITS	32U
#define	LONG_BITS	64U

#define	FLOAT_BITS	32U
#define D_FLOAT_BITS	64U

int main( void )
{
	printf("Part 1: Values from the \"limits.h\" file:\n");
	printf("char\tunsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", UCHAR_MAX, CHAR_MAX, CHAR_MIN );
	printf("short\tunsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", USHRT_MAX, SHRT_MAX, SHRT_MIN );
	printf("int\tunsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", UINT_MAX, INT_MAX, INT_MIN);
	printf("long\tunsigned MAX = %lu\tsigned max = %ld\tsigned min = %ld\n", ULONG_MAX, LONG_MAX, LONG_MIN);

	printf("Part 2: Computed values:\n");

	/* CHAR */
	unsigned char uc_max = ( pow(2, CHAR_BITS) ) - 1;	
	signed char sc_max = pow(2, CHAR_BITS)/2 - 1;
	signed char sc_min = pow(2, CHAR_BITS)/2 * (-1);
	printf("char  unsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", uc_max, sc_max, sc_min );
	
	/* SHORT */
	unsigned short us_max = ( pow(2, SHORT_BITS) ) - 1;	
	signed short ss_max = pow(2, SHORT_BITS)/2 - 1;
	signed short ss_min = pow(2, SHORT_BITS)/2 * (-1);
	printf("short unsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", us_max, ss_max, ss_min );
	
	/* INT */
	unsigned int ui_max = ( pow(2, INT_BITS) ) - 1;	
	signed int si_max = pow(2, INT_BITS)/2 - 1;
	signed int si_min = pow(2, INT_BITS)/2 * (-1);
	printf("int   unsigned MAX = %u\tsigned max = %d\tsigned min = %d\n", ui_max, si_max, si_min );


	/* LONG */
	unsigned long ul_max = ( pow(2, LONG_BITS) ) - 1;	
	signed long sl_max = pow(2, LONG_BITS)/2 - 1;
	signed long sl_min = pow(2, LONG_BITS)/2 * (-1);
	printf("long  unsigned MAX = %lu\tsigned max = %ld\tsigned min = %ld\n", ul_max, sl_max, sl_min );

	printf("Part 3: For floating point data types .... To be implemented!!\n");
}


