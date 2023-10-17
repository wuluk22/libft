/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:54:39 by clegros           #+#    #+#             */
/*   Updated: 2023/10/11 22:13:39 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0') && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int		main(void)
{
	char s1[] = "ABBA";
	char s2[] = "ABW";
	int	n = 3;
	int	result1 = ft_strncmp(s1, s2, n);
	int result2 = strncmp(s1, s2, n);

	printf("%d\n", result1);
	printf("%d\n", result2);

	return (0);
}*/
