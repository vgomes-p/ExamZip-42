#include <unistd.h>
#include <stdio.h>

char *ft_rev_print(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
			cnt++;
	cnt--;
	while (cnt >= 0)
	{
		write(1, &str[cnt], 1);
		cnt--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}

// int main(void)
// {
// 	char *str = "ABCDE";
// 	ft_ref_print(str);
// }