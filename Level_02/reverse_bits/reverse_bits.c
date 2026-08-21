
unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	char result;

	while (i--)
	{
		result = result << 1 | (octet & 1);
		octet = octet >> 1;
	}
	return (result);
}