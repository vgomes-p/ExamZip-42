#include <unistd.h>
#include <stdio.h>

void ft_putch(char ch)
{
	write(1, &ch, 1);
}

void ft_putnbr(int nbr)
{
	char ch;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ch = nbr % 10 + '0';
	ft_putch(ch);
}

int main(void)
{
	int nbr = 1;
	while (nbr != 101)
	{
		if (nbr % 4 == 0 && nbr % 7 == 0)
			write(1, "buzzfizz\n", 9);
		else if (nbr % 4 == 0)
			write(1, "buzz\n", 5);
		else if (nbr % 7 == 0)
			write(1, "fizz\n", 5);
		else
		{
			ft_putnbr(nbr);
			write(1, "\n", 1);
		}
		nbr++;
	}
	return (0);
}