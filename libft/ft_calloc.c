#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t number, size_t size)
{
	int *array_aux=NULL;
	void *array_malloc=NULL;
	size_t i;

	array_malloc=malloc(number*size);
	if (array_malloc==NULL)
		return NULL;
	array_aux=(int *)array_malloc;
	for(i=0;i<number;i++)
		*(array_aux+i)=0;
	return array_aux;
}
