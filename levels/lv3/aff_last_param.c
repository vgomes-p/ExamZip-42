#include <unistd.h>
#include <stdio.h>

char *ft_putstr(char *str)
{
	int pos = 0;
	while (str[pos] != '\0')
	{
		write(1, &str[pos], 1);
		pos++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(av[ac - 1]);
	write(1, "\n", 1);
	return (0);
}