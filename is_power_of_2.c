/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:52:55 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 21:04:43 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	// return ((n == 1) ? 1 : 0);
	if (n == 1)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", is_power_of_2(4));
	return (0);
}