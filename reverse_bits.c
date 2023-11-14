#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;
	int i = 8;

	while (i--)
	{
		result = result * 2 + (octet % 2);
		octet/= 2;
	}
	return (result);
}

int main()
{
	unsigned char octet = "00100110";
	printf("%c", reverse_bits(octet));
}