#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
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
	if (!array)
		return (NULL);
	while (pos < size)
	{
		if (end > start)
			array[pos] = end - pos;
		else if (start > end)
			array[pos] = end + pos;
		else
			array[pos] = end;
		pos++;
	}
	return (array);
}