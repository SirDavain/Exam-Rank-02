// NOT WORKING PROPERLY!!!

#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;

	while (*str)
		result = result * 10 + *str++ - 48;
	return (result);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		int	sum = 2;

		while (n > 0)
		{
			if (is_prime(n))
				sum += n;
			n--;
		}
		ft_putnbr(sum);
	}
	if (argc != 2)
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
