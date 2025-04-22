/*Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.*/

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