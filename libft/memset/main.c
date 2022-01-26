#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *mem_set(void *str, int c, size_t len);

int  main( void ) 
{ 
	char str1[] = "1234567890"; 
	memset( str1,'0',4);
	printf( "Original: %s\n",str1);

	char str2[] = "1234567890"; 
	unsigned char c;
	int len;
	c='0';
	len=4;

    mem_set(str2,c,len);
	printf( "Handmade: %s\n",str2);
	return (0);
}  
