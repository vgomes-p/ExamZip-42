#include <unistd.h>

int main(int ac, char **av)
{
	int pos;
	char seen[256] = {0};

	if (ac == 3)
	{
		pos = 0;
		while (av[1][pos] != '\0')
		{
			if(!seen[(unsigned char) av[1][pos]])
			{
				seen[(unsigned char) av[1][pos]] = 1;
				write(1, &av[1][pos], 1);
			}
			pos++;
		}
		pos = 0;
		while (av[2][pos] != '\0')
		{
			if(!seen[(unsigned char) av[2][pos]])
			{
				seen[(unsigned char) av[2][pos]] = 1;
				write(1, &av[2][pos], 1);
			}
			pos++;
		}
	}
	write(1, "\n", 1);
	pos++;
}