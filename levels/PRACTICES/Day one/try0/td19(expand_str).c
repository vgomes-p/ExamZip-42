/* Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline. */


#include "unistd.h"

int main(int ac, char **av)
{
	int pos = 0;

	if (ac == 2)
	{
		while (av[1][pos] != '\0' && (av[1][pos] == ' ' || av[1][pos] == '\t'))
			pos++;
		while (av[1][pos] != '\0')
		{
			while (av[1][pos] != '\0' && (av[1][pos] != ' ' && av[1][pos] != '\t'))
			{
				write(1, &av[1][pos], 1);
				pos++;
			}
			while (av[1][pos] == ' ' || av[1][pos] == '\t')
				pos++;
			if(av[1][pos] != '\0')
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}
