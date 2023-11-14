/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:33:33 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 06:49:05 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][i])
		{
			if (argv[1][i] == *argv[2])
				putchar(*argv[3]);
			else
				putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}