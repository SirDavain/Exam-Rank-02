/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:56:31 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 16:10:37 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (sign * result);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "    	+2300";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}