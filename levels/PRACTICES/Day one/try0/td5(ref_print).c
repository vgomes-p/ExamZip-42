/*Write a function that takes a string and write it starting with the last character to the first one*/

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
		while (pos >= 0)
		{
			write(1, &av[1][pos], 1);
			pos--;
		}
	}
	write(1, "\n", 1);
	return (0);
}