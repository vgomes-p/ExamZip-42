#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int pos = 0;
	if (ac == 2)
	{
		while (av[1][pos] != '\0')
		{
			if (av[1][pos] >= 'a' && av[1][pos] <= 'z')
				av[1][pos] = (av[1][pos] - 'a' + 13) % 26 + 'a';
			if (av[1][pos] >= 'A' && av[1][pos] <= 'Z')
				av[1][pos] = (av[1][pos] - 'A' + 13) % 26 + 'Z';
			write(1, &av[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}