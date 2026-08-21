
int	lcm(int a, int b)
{
	int	gcd;

	gcd = a;
	while (a % gcd || b % gcd)
		gcd--;
	return ((a / gcd) * b);
}