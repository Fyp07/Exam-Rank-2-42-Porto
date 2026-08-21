
#include <unistd.h>

int	count_words(char *str)
{
	int	i = 0;
	int words = 0;
	while (str[i])
	{
		while (str[i] && str[i] <= 32)
			i++;
		if (str[i])
			words++;
		while (str[i] && (str[i] != 32 && str[i] != '\t'))
			i++;
	}
	return (words);
}

void	rostring(char *str)
{
	int i = 0;
	int words = count_words(str);
	int checker = 0;

	if (words == 1)
	{
		while (str[i] && (str[i] > 32))
			write(1, &str[i++], 1);
	}
	else
	{
		while (str[i])
			i++;
		i--;
		while (i >= 0 && (str[i] != 32 && str[i] != '\t'))
			i--;
		while (str[i] && (str[i] != 32 && str[i] != '\t'))
			write(1, &str[++i], 1);
		i = 0;
		while (str[i] <= 32)
			i++;
		while (str[i] != 32 && str[i] != '\t')
			i++;
		while (str[i] && (checker < words - 1))
		{
			while (str[i] && str[i] <= 32)
				i++;
			while (str[i] && (str[i] != 32 && str[i] != '\t'))
				write(1, &str[i++], 1);
			checker++;
			write(1, " ", 1);
		}
		i = 0;
		while (str[i] <= 32)
			i++;
		while (str[i] != 32 && str[i] != '\t')
			write(1, &str[i++], 1);	
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}