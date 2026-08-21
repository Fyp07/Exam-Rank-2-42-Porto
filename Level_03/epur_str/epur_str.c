
#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int j;

	i = 0;
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
			write(1, " ", 1);
			while (i <= j && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
				i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}