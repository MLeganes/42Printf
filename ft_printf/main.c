#include "ft_printf.h"
#include <stdio.h>

int main()
{

    //*********char
    // int ret;
    // char c = 'A';
    // ret = ft_printf("Test char: %c", c);
    // printf("\n Numbers printed: %d \n", ret);
    
    // ********* pointer
    // char str[]="This is string-pointer";
    // int ret;
	// printf("\n   System pointer %p ", &str);


    // ret = ft_printf(" My p: %p ", &str);

/***
 * DECIMAL
 */
	int B;
	B = 0;
	printf("\n -------- decimal ----------- \n");
	printf("%d_ ", ft_printf("%d", B));
	printf("\n");
    printf("%d_", printf("%d", B));    
	printf("\n");



/***
 * HEXADECIMAL
 */
	int a;
	a = 0x0000ee;
	printf("\n");
	printf("%d", ft_printf(" My hex: %x ", a));
	printf("\n");
    printf("%d", printf(" Sys hex: %x ", a));    

    return 0;
}