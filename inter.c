/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterate.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:43:35 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/06 09:34:52 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int iterate(char *str, char c, int len)
{
	int i = 0;

	while (str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!iterate(argv[1], argv[1][i], i) && iterate(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}