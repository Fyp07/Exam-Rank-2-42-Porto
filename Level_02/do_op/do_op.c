
#include <stdio.h>
#include <stdlib.h>

void	do_op(int n1, char *op, int n2)
{
	int res = 0;

	if (op[1])
		return ;
	if (op[0] == '+')
		res = n1 + n2;
	else if (op[0] == '-')
		res = n1 - n2;
	else if (op[0] == '*')
		res = n1 * n2;
	else if (op[0] == '/')
		res = n1 / n2;
	else if (op[0] == '%')
		res = n1 % n2;
	printf("%d", res);
}

int main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2], atoi(argv[3]));
	printf("\n");
	return (0);
}