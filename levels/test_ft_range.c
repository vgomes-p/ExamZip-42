#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *array;
	int size;
	int pos;
	
	if (min > max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	pos = 0;
	while (pos < size)
	{
		array[pos] = min + 1;
		pos++;
	}
	return (array);
}
