#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}