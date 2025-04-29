#include <stdlib.h>

#define WD_LEN 1000

char **split(char *str)
{
	char **array;
	int pos = 0;
	int word = 0
	int letter = 0;

	array = malloc(WD_LEN);
	while (str[pos])
	{
		if (str[pos] > ' ')
		{
			array[word] = malloc(WD_LEN);
			while (str[pos] > ' ')
				array[word][letter++] = str[pos++];
			array[word++][letter] = '\0';
		}
		else
			pos++;
	}
	array[word] = NULL;
	return (array);
}
