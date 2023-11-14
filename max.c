/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 08:57:05 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/05 09:19:15 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* void	ft_swap(int a, int b)
{
	int tmp;
	
	tmp = a;
	a = b;
	b = tmp;
} */

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	unsigned int	result;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int main()
{
	int tab[] = {5, 42, 35, 4, 2};
	unsigned int len = 5;
	printf("%d\n", max(tab, len));
	return (0);
}