/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:16:13 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 06:24:39 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'y' || *str >= 'A' && *str <= 'Y')
			putchar(*str + 1);
		else if (*str == 'z' || *str == 'Z')
			putchar(*str - 25);
		else
			putchar(*str);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rotone(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}