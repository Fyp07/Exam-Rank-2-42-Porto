
#include <unistd.h>

void	ft_putchar(char c, int repeat)
{
	int i = 1;
	while (i < repeat)
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int i = 0;
	int repeat = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = str[i] - 'a' + 1;
			ft_putchar(str[i], repeat);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat = str[i] - 'A' + 1;
			ft_putchar(str[i], repeat);
		}
		else
			write(1, &str[i], 1);
		i++;	
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}