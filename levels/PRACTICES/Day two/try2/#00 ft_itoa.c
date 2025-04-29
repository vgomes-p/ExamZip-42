#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	/*Inicie as variaveis para contador/tamanho, resultado e evitar overflow*/
	long nb;
	long cnt;
	char *result;

	/* copie o numero para a variavel anti-overflow e inicie o contador*/
	nb = nbr;
	cnt = 0;

	/*se o numero for negativo ou 0, garanta um espaço para o '-' ou o proprio 0*/
	if (nb <= 0)
		cnt = 1;

	/* faça uma copia temporaria do anti-overflow (aof) para contar os digitos sem alterar o aof*/
	long temp = nb;

	/* se a copia for negativa, tranforme em positiva */
	if (temp < 0)
		temp = -temp;

	/* enquanto a copia existir, atribua a copia o valor da copia dividido por 10 e incremente o contador */
	while (temp > 0)
	{
		temp = temp / 10;
		cnt++;
	}

	/* aloque na resposta o valor de contador + 1 */
	result = malloc(cnt + 1);
	if (!result)
		return (NULL);

	/*atribua ao ultimo valor de contador o terminador nulo */
	result[cnt] = '\0';

	/* se o aof for 0, atribua a posiçao 0 da resposta o caractere 0 */
	if (nb == 0)
	{
		result[0] = '0';
		return (result);
	}

	/* se o aof for negativo, atribula a posição 0 o caractere - e tranforme nb em positivo */
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}

	/* enquanto nb for maior que zero, decremente o contador e atribua a posição atual mod de nb por 10 + '0' e divida nb por 10*/
	while (nb > 0)
	{
		cnt--;
		result[cnt] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

int main(void)
{
	int nbr = -10;
	printf("result: %s\n", ft_itoa(nbr));
	return (0);
}