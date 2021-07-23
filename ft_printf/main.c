#include "ft_printf.h"
#include <stdio.h>

int main()
{

/***
 * HEXADECIMAL
 */
//int u;
//	u = 0x23EE;
	printf("\n -------- unsigned int ----------- \n");
	printf("_%d_ ", ft_printf(" %p ", (void *)-16));
	printf("\n");
    printf("_%d_", printf(" %p ", (void *)-16));    
	printf("\n");

/***
 * POINTE*
//  */

//     TEST(1, print(" %p ", -1));
// 	TEST(2, print(" %p ", 1));
// 	TEST(3, print(" %p ", 15));
// 	TEST(4, print(" %p ", 16));
// 	TEST(5, print(" %p ", 17));
    return 0;
}