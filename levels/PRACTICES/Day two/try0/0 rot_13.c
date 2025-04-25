/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.*/

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
			{
				av[1][pos] = (av[1][pos] - 'a' + 13) % 26 + 'a';
				write(1, &av[1][pos], 1);
			}
			else if (av[1][pos] >= 'A' && av[1][pos] <= 'Z')
			{
				av[1][pos] = (av[1][pos] - 'A' + 13) % 26 + 'A';
				write(1, &av[1][pos], 1);
			}
			else
				write(1, &av[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}