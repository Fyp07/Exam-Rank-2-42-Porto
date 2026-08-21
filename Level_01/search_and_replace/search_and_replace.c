
#include <unistd.h>

void	search_and_replace(char *str, char *tar, char *new)
{
	int i = 0;
	if (tar[i + 1] || new[i + 1])
		return ;
	while (str[i])
	{
		if (str[i] == tar[0])
			str[i] = new[0];
		write(1, &str[i++], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}