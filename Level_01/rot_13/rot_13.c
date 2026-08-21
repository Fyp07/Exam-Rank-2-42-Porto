
#include <unistd.h>

void	rot_13(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'm')
			c += 13;
		else if (c >= 'n' && c <= 'z')
			c -= 13;
		else if (c >= 'A' && c <= 'M')
			c += 13;
		else if (c >= 'N' && c <= 'Z')
			c -= 13;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}