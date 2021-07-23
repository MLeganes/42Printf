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
    char str[]="This is string-pointer";
    int ret;
    ret = ft_printf("Test for p: %p", &str);

    //ret = ft_printf("number: %d", ret);
    // printf("\n Numer of chars: %d \n", ret);

    return 0;
}