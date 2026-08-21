
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	count_words(char *str)
{
	int	i = 0;
	int words = 0;
	while (str[i])
	{
		while (str[i] && str[i] <= 32)
			i++;
		words++;
		while (str[i] && (str[i] != 32 && str[i] != '\t'))
			i++;
	}
	return (words);
}

void	rev_wstr(char *str)
{
	int i;
	int j;
	int words = 0;
	int space = count_words(str);

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (i >= 0 && str[i] <= 32)
			i--;
		while (i >= 0 && (str[i] != 32 && str[i] != '\t'))
			i--;
		j = i + 1;
		words++;
		while (str[j] && (str[j] != 32 && str[j] != '\t'))
			write(1, &str[j++], 1);
		if (words != space)
			write(1, " ", 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}