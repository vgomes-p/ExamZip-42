/* Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n. */


#include <unistd.h>

int inter(char *str, char ch, int len)
{
	int pos = 0;
	while (str[pos] && (pos < len || len == -1))
		if (str[pos++] == ch)
			return (1);
	return (0);
}

int main(int ac, char **av)
{
	int pos;

	if (ac == 3)
	{
		pos = 0;
		while(av[1][pos])
		{
			if(!inter(av[1], av[1][pos], pos) && inter(av[2], av[1][pos], -1))
				write(1, &av[1][pos], 1);
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}