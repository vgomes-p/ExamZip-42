#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	long nb;
	int pos;
	char *string;

	nb = nbr;
	pos = 0;
	if (nb <= 0)
		pos = 1;
	long temp = nb;
	if (temp < 0)
		temp = -temp;
	while (temp > 0)
	{
		temp = temp / 10;
		pos++;
	}
	string = malloc(pos + 1);
	if (!string)
		return (NULL);
	string[pos] = '\0';
	if (nb == 0)
	{
		string[0] = '0';
		return (string);
	}
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		pos--;
		string[pos] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (string);
}

int main(void)
{
	int nbr = -549151;
	printf("number: %d\n", nbr);
	printf("string: %s\n", ft_itoa(nbr));
	return (0);
}