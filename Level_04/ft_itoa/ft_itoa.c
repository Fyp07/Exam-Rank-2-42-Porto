
#include <stdlib.h>

int	dig_len(int n)
{
	int i = 0;

	if (n == 0)
		return (1);
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
	int	len = dig_len(n);
	char *res;

	if (!(res = malloc((len + 1 * sizeof(char)))))
		return NULL;
	res[len] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	while (n)
	{
		res[len - 1] = n % 10 + 48;
		len--;
		n /= 10;
	}	
	return (res);
}
