
#include <stdlib.h>
#include <stdio.h>

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
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
