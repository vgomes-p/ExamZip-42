#include <stdlib.h>

#define WD_LEN 1000

char **split(char *str)
{
	char **array;
	int pos = 0;
	int word = 0;
	array = malloc(WD_LEN);
	while (str[pos])
	{
		if (str[pos] > 32)
		{
			int letter_pos = 0;
			array[word] = malloc(WD_LEN);
			while (str[pos] > 32)
				array[word][letter_pos++] = str[pos++];
			array[word++][letter_pos] = '\0';
		}
		else
			pos++;
	}
	array[word] = NULL;
	return (array);
}