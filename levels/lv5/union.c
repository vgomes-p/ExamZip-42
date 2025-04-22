/* Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n. */

#include <unistd.h>

int main(int argc, char **argv)
{
	char seen[256] = {0};
	int pos;

	if (argc == 3)
	{
		pos = 0;
		while (argv[1][pos] != '\0')
		{
			if (!seen[(unsigned char) argv[1][pos]])
			{
				seen[(unsigned char) argv[1][pos]] = 1;
				write(1, &argv[1][pos], 1);
			}
			pos++;
		}
		pos = 0;
		while (argv[2][pos] != '\0')
		{
			if (!seen[(unsigned char) argv[2][pos]])
			{
				seen[(unsigned char) argv[2][pos]] = 1;
				write(1, &argv[2][pos], 1);
			}
			pos++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
