/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.*/

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
		while (av[1][pos] == ' ' || av[1][pos] == '\t')
			pos--;
		while (av[1][pos] != ' ' && av[1][pos] != '\t')
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