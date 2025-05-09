#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int pos = 0;

	if (ac == 2)
	{
		while (av[1][pos] != '\0')
			pos++;
		pos--;
		while (pos >= 0 && (av[1][pos] == ' ' || av[1][pos] == '\t'))
			pos--;
		if (pos < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (pos >= 0 && (av[1][pos] != ' ' && av[1][pos] != '\t'))
			pos--;
		pos++;
		while (av[1][pos] != '\0' && (av[1][pos] != ' ' && av[1][pos] != '\t'))
		{
			write(1, &av[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
