#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc != 2)
		printf("\n");
	else
	{
		i = 1;
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (n >= ++i)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n == i)
					break ;
				printf("*");
				n /= i;
				i = 1;
			}
		}
	}
	return (0);
}