
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int i = 0;
	int k = 0;
	int j;
	char **box;

	if (!(box = malloc(256 * sizeof(char *))))
		return (NULL);
	while (str[i] && str[i] <= 32)
		i++;
	while (str[i])
	{
		j = 0;
		if (!(box[k] = malloc(4096 * sizeof(char))))
			return NULL;
		while (str[i] && str[i] > 32)
			box[k][j++] = str[i++];
		while (str[i] && str[i] <= 32)
			i++;
		box[k][j] = '\0';
		k++;
	}
	box[k] = NULL;
	return (box);
}
