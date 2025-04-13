#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (ch);
}

char ft_putnbr(int nbr)
{
	char ch;
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ch = nbr % 10 + '0';
	ft_putchar(ch);
	return (ch);
}

int	*ft_print_range(int start, int end)
{
	while (start != end + 1)
	{
		ft_putnbr(start);
		start++;
	}
	write(1, "\n", 1);
	return (0);
}

int main(void)
{
	ft_print_range(1, 4);
}