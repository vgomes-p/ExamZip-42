#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	/*Inicie as variaveis para contador/tamanho, resultado e evitar overflow*/
	long	nb;
	int		len;
	char	*res;

	/* copie o numero para a variavel anti-overflow e inicie o contador*/
	nb = nbr;
	len = 0;

	/*se o numero for negativo ou 0, garanta um espaço para o '-' ou o proprio 0*/
	if (nb <= 0)
		len = 1;

	/* faça uma copia temporaria do anti-overflow (aof) para contar os digitos sem alterar o aof*/
	long tmp = nb;

	/* se a copia for negativa, tranforme em positiva */
	if (tmp < 0)
		tmp = -tmp;

	/* enquanto a copia existir, atribua a copia o valor da copia dividido por 10 e incremente o contador */
	while (tmp > 0)
	{
		tmp = tmp / 10;
		len++;
	}

	/* aloque na resposta o valor de contador + 1 */
	res = malloc(len + 1);
	if (!res)
		return (NULL);

	/*atribua ao ultimo valor de contador o terminador nulo */
	res[len] = '\0';

	/* se o aof for 0, atribua a posiçao 0 da resposta o caractere 0 */
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}

	/* se o aof for negativo, atribula a posição 0 o caractere - e tranforme nb em positivo */
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}

	/* enquanto nb for menor que zero, decremente o contador e atribua a posição atual mod de nb por 10 + '0' e divida nb por 10*/
	while (nb > 0)
	{
		len--;
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	/*Inicie as variaveis para contador/tamanho, resultado e evitar overflow*/

	/* copie o numero para a variavel anti-overflow e inicie o contador*/

	/*se o numero for negativo ou 0, garanta um espaço para o '-' ou o proprio 0*/

	/* faça uma copia temporaria do anti-overflow (aof) para contar os digitos sem alterar o aof*/

	/* se a copia for negativa, tranforme em positiva */

	/* enquanto a copia existir, atribua a copia o valor da copia dividido por 10 e incremente o contador */

	/* aloque na resposta o valor de contador + 1 */

	/*atribua ao ultimo valor de contador o terminador nulo */

	/* se o aof for 0, atribua a posiçao 0 da resposta o caractere 0 */

	/* se o aof for negativo, atribula a posição 0 o caractere - e tranforme nb em positivo */

	/* enquanto nb for maior que zero, decremente o contador e atribua a posição atual mod de nb por 10 + '0' e divida nb por 10*/

}
