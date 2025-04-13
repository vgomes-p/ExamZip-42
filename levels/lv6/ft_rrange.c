#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int max, int min)
{
	int *array;
	int pos;
	int size;

	if (max > min)
		size = max - min + 1;
	else
		size = min - max + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	pos = 0;
	while (pos < size)
	{
		if (max > min)
			array[pos] = max - pos;
		else
			array[pos] = max + pos;
		pos++;
	}
	return (array);
}