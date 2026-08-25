
#include <unistd.h>

int	count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i] && str[i] <= 32)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] > 32)
			i++;
		words++;
		while (str[i] && str[i] <= 32)
			i++;
	}
	return (words);
}

void	rev_wstr(char *str)
{
	int	i = 0;
	int j = 0;
	int check = 0;
	int words = count_words(str);

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (i >= 0 && str[i] > 32)
			i--;
		j = i + 1;
		while (str[j] && str[j] > 32)
			write(1, &str[j++], 1);
		check++;
		if (check != words)
			write(1, " ", 1);
		i--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}