
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == 32 || i == 0)
				c -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] != 32 && str[i - 1])
				c += 32;
		}
		ft_putchar(c);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i++]);
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}