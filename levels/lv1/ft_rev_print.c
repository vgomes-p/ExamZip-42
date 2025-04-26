#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	ft_rev_print(char *str)
{
	int pos = 0;

	while (str[pos] != '\0')
		pos++;
	pos--;
	while (pos >= 0)
	{
		write(1, &str[pos], 1);
		pos--;
	}
	return (*str);
}