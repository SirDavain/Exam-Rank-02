/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 08:44:55 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/05 08:56:18 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	last_word(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 126)
		write(1, &str[j++], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}