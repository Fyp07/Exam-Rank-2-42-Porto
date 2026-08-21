
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

void	add_prime_sum(int n)
{
	int res;
	int num;
	
	if (n < 0)
		return ;
	res = 0;
	num = 1;
	while (num <= n)
	{
		if (is_prime(num))
			res = res + num;
		num++;
	}
	ft_putnbr(res);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}