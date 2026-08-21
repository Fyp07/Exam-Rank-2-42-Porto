
#include <stdlib.h>
#include <stdio.h>

int	num_len(int n)
{
	int i = 0;

	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long n = nbr;
	int size = num_len(n);
	char *res;

	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[size] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n)
	{
		res[size - 1] = n % 10 + 48;
		size--;
		n /= 10;
	}
	return (res);
}
