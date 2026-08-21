
#include <unistd.h>

void	rotone(char *str)
{
	int i = 0;
	char c;
	while (str[i])
	{
		c = str[i];
		if (str[i] == 'z')
			c -= 25;
		else if (str[i] >= 'a' && str[i] <= 'y')
			c += 1;
		else if (str[i] == 'Z')
			c -= 25;
		else if (str[i] >= 'A' && str[i] <= 'Y')
			c += 1;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}