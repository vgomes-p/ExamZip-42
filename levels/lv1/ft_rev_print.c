// Write a function that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.
// char	rev_print(char *str)

char	rev_print(char *str)
{
	int	pos = 0;
	while (str[pos] != '\0')
		pos++;
	pos--;
	while (pos >= 0)
	{
		write(1, &str[pos], 1);
		pos--;
	}
	write(1, "\n", 1);
	return (*str);
}