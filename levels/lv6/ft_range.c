/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.*/


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
