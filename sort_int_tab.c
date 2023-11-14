#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	tmp;

	while (i < (size - 1))
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/* int main()
{
	int tab[] = {1, 4, 3, 2, 5};
	unsigned int size = 5;
	printf("%s", sort_int_tab(tab, size));
	return (0);
} */