/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:26:37 by dulrich           #+#    #+#             */
/*   Updated: 2023/11/04 17:32:23 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (s2[i] == *s1)
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

int main()
{
	char *s1 = "Hello";
	char *s2 = "";
	printf("%s", ft_strpbrk(s1, s2));
	return (0);
}