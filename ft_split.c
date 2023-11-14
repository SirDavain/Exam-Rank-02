#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	char **result = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
	return (result);
}

int main()
{
	char *str = "hi there,    I contain 		too many spaces";
	printf("%s", ft_split(str));
	return (0);
}