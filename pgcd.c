#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		while (n1 != n2)
		{
			if (n1 > n2)
				n1 -= n2;
			else
				n2 -=n1;
		}
		printf("%d", n1);
	}
	printf("\n");
	return (0);
}