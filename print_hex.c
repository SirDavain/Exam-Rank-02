#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	while (*str)
		result = result * 10 + *str++ - '0';
	return (result);
}

void	ft_print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";
	if (n >= 16)
		ft_print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}