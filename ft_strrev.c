/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:33:19 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 20:40:02 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int i = -1;
	int len = 0;
	char tmp;

	while (str[len])
		len++;
	while (++i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char *str = "Hellos";
	printf("%s", ft_strrev(str));
	return (0);
}