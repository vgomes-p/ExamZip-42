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