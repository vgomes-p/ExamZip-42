#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	long nb;
	int pos;
	char *result;

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
	result = malloc(pos + 1);
	if (!result)
		return (NULL);
	result[pos] = '\0';
	if (nb == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		pos--;
		result[pos] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

// int main(void)
// {
// 	int nbr = 42;
// 	printf("result: %s\n", ft_itoa(nbr));
// 	return (0);
// }
