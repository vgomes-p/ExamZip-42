#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (ch);
}

char	ft_putnbr(int nbr)
{
	char	ch;
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ch = nbr % 10 + '0';
	ft_putchar(ch);
	return (ch);
}

int	main(void)
{
	int	nbr = 1;
	while (nbr != 101)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (nbr % 3 == 0)
			write(1, "fizz\n", 5);
		else if (nbr % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(nbr);
			write(1, "\n", 1);
		}
		nbr++;
	}
	return (0);
}

