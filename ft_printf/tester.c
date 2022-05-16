#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>

void variadic_funct(char * str, ...)
{
    va_list args;
    int i;
    i=0;
    va_start(args, *str);
    printf ("str= %s\n", str);
    while (str[i])
    {
      printf("%c , ", va_arg(args, int));
      i++;
    }
    printf ("\n");
    va_end(args);
}

int main(void)
{
    variadic_funct("hola",'h','o','l','a');
}
