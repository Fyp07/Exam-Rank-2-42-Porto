
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	expand_str(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j])
		j++;
	j--;
	while (str[j] == 32)
		j--;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (i <= j)
	{
		if (str[i] == 32)
		{
			ft_putstr("   ");
			while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
				i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}