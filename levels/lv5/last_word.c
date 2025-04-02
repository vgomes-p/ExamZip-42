#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return(ch);
}

int	main(int argc, char **argv)
{
	int	len = 0;
	int	total_len = 0;
	int	difference = 0;
	int	needed = 0;
	int	end = 0;

	if (argc == 2)
	{
		while (argv[1][len] != '\0')
			len++;
		len--;
		total_len = len;
		if (len >= 0 && (argv[1][len] == ' ' || argv[1][len] == '\t'))
		{
			while (argv[1][len] == ' ' || argv[1][len] == '\t')
			{
				len--;
				end++;
				difference++;
			}
		}
		while (argv[1][len] != ' ' && argv[1][len] != '\t')
		{
			difference++;
			len--;
		}
		needed = total_len - difference + 1;
		while (needed <= total_len - end)
		{
			ft_putchar(argv[1][needed]);
			needed++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
