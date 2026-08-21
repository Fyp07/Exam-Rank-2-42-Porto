
#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			c = 'a' + ('z' - c);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = 'A' + ('Z' - c);
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}