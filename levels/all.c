
//LEVEL = 3



/*Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.*/



#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}



/*Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline*/


#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++,
		}
	}
	write(1, "\n", 1);
	return (0;)
}





//LEVEL = 4



Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

#include <unistd.h>


int main(int argc, char **argv)
{
	int  i = 0;

	if (argc == 2)
	{
		while(argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
		{
			write(1, &argv[1][i] , 1);
			i++;
		}
	}
	write(1, " \n", 1);
	return (0);
}




/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.*/


#include <unistd.h>

int main(int argc, char **argv)
{
	int  i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}





Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.  //dica função e programa

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while(*s)
	{
		if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
			ft_putchar(*s + 1);
		else if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else 
			ft_putchar(*s);
		++s;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);

}






//LEVEL = 5



Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.


#include <unistd.h>

int main(int argc, char **argv)
{
    int indice_atual = 0;
    int indice_anterior = 0;
    int repetido_ou_nao = 0;

    if (argc == 3)
    {
        while (argv[1][indice_atual] != '\0')
        {
            repetido_ou_nao = 0;
            indice_anterior = 0;
            while (indice_anterior < indice_atual)
            {
                if (argv[1][indice_anterior] == argv[1][indice_atual])
                    repetido_ou_nao = 1;
                indice_anterior++;
            }
            if (repetido_ou_nao == 0)
                write(1, &argv[1][indice_atual], 1);
            indice_atual++;
        }
        indice_atual = 0;
        while (argv[2][indice_atual] != '\0')
        {
            indice_anterior = 0;
            repetido_ou_nao = 0;
            while (argv[1][indice_anterior] != '\0')
            {
                if (argv[1][indice_anterior] == argv[2][indice_atual])
                    repetido_ou_nao = 1;
                indice_anterior++;
            }
            if (repetido_ou_nao == 0)
            {
                indice_anterior = 0;
                while (indice_anterior < indice_atual)
                {
                    if (argv[2][indice_anterior] == argv[2][indice_atual])
                        repetido_ou_nao = 1;
                    indice_anterior++;
                }
                if (repetido_ou_nao == 0)
                    write(1, &argv[2][indice_atual], 1);
            }
            indice_atual++;
        }
    }
    write(1, "\n", 1);
    return (0);
}







Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.


#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}






Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.



#include <unistd.h>

void	last_word(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i--;
	while (s[i] && !((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
		i--;
	i++;
	while (s[i] && !((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
	{
		if (s[i] >= 32 && s[i] <126)
			write (1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}





//LEVEL = 6

Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);


#include <stdlib.h>

static int	nbr_size(int nbr)
{
	int	i = 0;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		is_neg;
	char	*result;

	is_neg = (nbr < 0);
	i = nbr_size(nbr) + is_neg; 
	result = malloc(sizeof(char) * (i + 1)); 
	if (!result)
		return (NULL);

	result[i--] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (is_neg)
	{
		result[0] = '-';
		nbr = -nbr; 
	}
	while (i >= is_neg)
	{
		result[i--] = (nbr % 10) + '0'; 
		nbr /= 10;
	}
	return (result);
}












///atoi

int ft_atoi(const char *str)
{
    int num = 0;
    int sign = 1;

    while (*str == 32 || (*str >= 9 && *str <= 13))
        ++str;
    if ((*str == '+') || (*str == '-'))
    {
        if (*str == '-')
            sign = -1;
        ++str;
    }
    while ((*str >= '0') && (*str <= '9'))  
        num = (num * 10) + (*str++ - '0');
    return (num * sign);
}
























Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.




#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	size;
	int	i;

	size = (start > end) ? (start - end + 1) : (end - start);

	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

//outra versão, converir

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		n;
	int		*s;

	n = max >= min ? max - min : min - max;
	if (!(s = (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}





Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.


#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*rrange;
	int	size;
	int	i;

	size = (start > end) ? (start - end + 1) : (end - start);
	rrange = (int *)malloc(sizeof(int) * size);
	if (!rrange)
		return (NULL);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}






//LVEL = 7



Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.




#include "unistd.h"

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] != 32 && argv[1][i] != 9 && argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] == 32 || argv[1][i] == 9)
				i++;
			if (argv[1][i] != '\0')
				write(1, "  ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}



//FT_SPLIT

//não tenho ainda =(