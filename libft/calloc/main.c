#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t number, size_t size);

/*void *malloc(size_t size);*/

int main(void)
{
	char *array;
	size_t i;
	size_t N;

	N=4;
	/*array = (int*)calloc(3,sizeof(int));*/
	array = (char*)ft_calloc(N,sizeof(char));
	if (array==NULL)
		printf("La memoria dinamica esta completa y no se pueden asignar valores.\n");
	else
	{
		for(i=0;i<N;i++)
			printf("%i, ",*(array+i));
	}
	printf("\n");
	free(array);
	return 0;
}
