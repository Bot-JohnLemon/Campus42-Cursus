 #include <stdio.h>
#include <stdarg.h>
 
void variadic_funct(int count, ...)
{
    va_list args;
    int i;
    va_start(args, count);
    printf ("variadic : argument count = %d\n", count);
    for (i = 0; i < count; i++) {
     printf("argument %d = %d, ", i + 1, va_arg(args, int));
    }
    printf ("\n");
    va_end(args);
}
 
int main(void)
{
    variadic_funct(0); 
    variadic_funct(1,10);
    variadic_funct(2,10,20);
    variadic_funct(3,10,20,30);  
} 
