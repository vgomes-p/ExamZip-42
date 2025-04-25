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

int	*ft_range(int start, int end)
{
	int pos = 0;
	int size;
	int *array;

	if (end > start)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	else
		size = 1;

	array = malloc(sizeof(int) * size);
	while(pos < size)
	{
		if (start < end)
			array[pos] = start + pos;
		else if (end < start)
			array[pos] = start - pos;
		else
			array[pos] = start;
		pos++;
	}
	return (array);
}

