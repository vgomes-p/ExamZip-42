/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr); */


#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	nb; // Usamos long pra evitar overflow com INT_MIN (-2147483648)
	int		len; // Vai guardar o número de caracteres necessários pra representar o número
	char	*res; // Ponteiro pro resultado (a string final)

	nb = nbr; // Copiamos o número para 'nb', que é long
	len = 0; // Começamos com tamanho zero
	if (nb <= 0) // Se for 0 ou negativo precisamos de pelo menos 1 espaço: pra '0' ou pro '-'
		len = 1;
	long tmp = nb; // Fazemos uma cópia de 'nb' só pra contar os dígitos
	if (tmp < 0) // Se for negativo transformamos em positivo pra contar os dígitos corretamente
		tmp = -tmp;
	while (tmp > 0) // Enquanto ainda tiver dígitos, remove o último dígito, conta esse dígito no len
	{
		tmp /= 10;
		len++;
	}
	res = malloc(len + 1); // Aloca espaço para os caracteres + o '\0'
	if (!res)
		return (NULL); // Se a alocação falhar, retorna NULL
	res[len] = '\0'; // Coloca o terminador de string no final
	if (nb == 0) // Caso especial: se o número for 0, coloca '0' na string e retorna a string pronta
	{
		res[0] = '0';
		return (res);
	}
	if (nb < 0) // Se o número original era negativo, coloca o sinal de menos na primeira posição e torna positivo pra facilitar o resto
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb > 0) // Enquanto ainda tiver dígitos, coloca o último dígito na posição correta, convertendo pra caractere, remove o dígito já usado
	{
		res[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res); // Retorna a string pronta
}
