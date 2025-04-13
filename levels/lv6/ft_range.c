#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *array;
	int pos;
	int size;

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