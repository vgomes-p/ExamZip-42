#include "unistd.h"

int main(int ac, char **av)
{
	int pos = 0;

	if (ac == 2)
	{
		while (av[1][pos] == ' ' || av[1][pos] == '\t'))
			pos++;
		while (av[1][pos] != '\0')
		{
			while (av[1][pos] != '\0' && (av[1][pos] != ' ' && av[1][pos] != '\t'))
				write(1, &av[1][pos++], 1);
			while (av[1][pos] == ' ' || av[1][pos] == '\t')
				pos++;
			if(av[1][pos--] != '\0')
				write(1, "   ", 3);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}