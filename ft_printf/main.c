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
	printf("_%d_ ", ft_printf(" %x ", 10));
	printf("\n");
    printf("_%d_", printf(" %x ", 10));    
	printf("\n");

/***
 * HEXADECIMAL
 */
	// int a;
	// a = 0x0000ee;
	// printf("\n");
	// printf("%d", ft_printf(" My hex: %x ", a));
	// printf("\n");
    // printf("%d", printf(" Sys hex: %x ", a));    

    return 0;
}