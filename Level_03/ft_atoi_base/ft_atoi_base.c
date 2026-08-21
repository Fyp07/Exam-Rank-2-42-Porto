
#include <unistd.h>

int is_valid(int c, int base)
{
	char *upper = "0123456789abcdef";
	char *lower = "0123456789ABCDEF";

	int i = 0;
	while (base > i)
	{
		if ((c == lower[i]) || (c == upper[i]))
			return (1);
		i++;
	}	
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] && is_valid(str[i], str_base))
	{
		num *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			num += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			num += str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'z')
			num += str[i] - 'a' + 10;
		i++;
	}
	return (num * sign);
}