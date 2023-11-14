#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = end - start;

	if (len < 0)
		len *= -1;
	len++;
	int *res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

int main()
{
	int *result = ft_range(3, 1);
	printf("%d\n", *result);
	return (0);
}