
#include <stdlib.h>

char	**ft_split(char *str)
{
	int i = 0;
	int k = 0;
	char **split;
	int j;

	if (!(split = malloc(sizeof(char *) * 256)))
		return (NULL);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] && (str[i] != 32 && str[i] != '\t'))
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}
