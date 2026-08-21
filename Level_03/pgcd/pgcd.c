
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int res = 0;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

void	pgcd(int a, int b)
{
	while (b)
	{
		int	temp = b;
		b = a % b;
		a = temp;
	}
	printf("%d", a);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	printf("\n");
	return (0);
}