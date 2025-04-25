// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.

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
