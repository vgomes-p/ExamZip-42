/*Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.*/

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int pos = 0;
	while (str[pos] != 0)
	{
		write(1, &str[pos], 1);
		pos++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}