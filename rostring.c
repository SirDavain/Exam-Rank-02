#include <unistd.h>

int		ft_isblank(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *s)
{
	int		i = 0;
	int		word_len = 0;

	while (s[i])
	{
		while (ft_isblank(s[i]))
			i++;
		if (s[i] && !ft_isblank(s[i]))
		{
			if (word_len == 0)
				while (s[i] && !ft_isblank(s[i++]))
					word_len++;
			else
			{
				while (s[i] && !ft_isblank(s[i]))
					write(1, &s[i++], 1);
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (word_len--)
		write(1, &s[i++], 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}