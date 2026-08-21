
#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z'
		&& (str[i + 1] == 32 || str[i + 1] == '\0'))
			c -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z'
		&& (str[i + 1] != 32 && str[i + 1] != '\0'))
			c += 32;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
