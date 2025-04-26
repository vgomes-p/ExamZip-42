#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int pos = 0;
	if (ac != 1)
	{
		while (av[1][pos] != '\0')
		{
			if (av[1][pos] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			pos++;
		}
		write(1, "a\n", 2);
		return (0);
	}
	write(1, "a\n", 2);
	return (0);
}