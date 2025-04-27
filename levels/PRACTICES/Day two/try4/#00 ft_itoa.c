#include <stdlib.h>

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