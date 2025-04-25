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

int	*ft_rrange(int start, int end)
{
	int	*array;
	int	pos = 0;
	int	size;

	if (end > start)
		size = end - start + 1;
	else
		size = start - end + 1;

	array = malloc(sizeof(int) * size);
	if (!array)
		return(NULL);

	while (pos < size)
	{
		int cnt;
		if (end > start)
			array[pos] = end - pos;
		else
			array[pos] = end + pos;
		pos++;
	}
	return (array);
}
