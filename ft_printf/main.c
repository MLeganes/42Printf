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


	int a;
	int ret;

	a = 0x0000ee;
	ret = ft_printf("My hex: %x", a);
    printf("\n Sys hex: %x \n", a);
    

    return 0;
}