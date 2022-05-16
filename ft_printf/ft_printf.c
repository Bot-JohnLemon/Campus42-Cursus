#include <stdio.h>
#include <stdarg.h>
#include "libprintf.h"

int printf(const char *str, ...)
{
    va_list args;
    int     i;
    int     var_len;
    int     total_len;

    total_len = 0;
    i = 0;
    var_len = 0;
    va_start(args, *);
    while ((char *)str != '\0')
    {
        if ((char *)str + i == '%')
        {
            var_len = 0;
            if ((char *)str + i == 'c')
                var_len = ft_print_char(va_arg(args, int));
            else if ((char *)str + i == 's')
                var_len = ft_print_str(va_arg(args, char *));
            else if ((char *)str + i == 'p')
                var_len = ft_print_ptr(va_arg(args, void *));
            else if ((char *)str + i == 'd')
                var_len = ft_print_num_b10(va_arg(args, int));
            else if ((char *)str + i == 'i')
                var_len = ft_print_num_in_b10(va_arg(args, int));
            else if ((char *)str + i == 'u')
                var_len = ft_print_num_b10_no_sign(va_arg(args, unsigned int));
            else if ((char *)str + i == 'x')
                var_len = ft_print_num_hex_min(va_arg(args, long int));
            else if ((char *)str + i == 'X')
                var_len = ft_print_num_hex_may(va_arg(args, long int));
            else if ((char *)str + i == '%')
                var_len = ft_print_percentage(va_arg(args, int));
        }
        else
        {
            ft_print((char *)str + i);
            total_len++;
        }
        i++;
        total_len+=var_len;
    }
    return total_len; 
}

printf("hola %d",10);
