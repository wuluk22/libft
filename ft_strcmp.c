/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:40:43 by clegros           #+#    #+#             */
/*   Updated: 2023/09/11 17:16:09 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int		main(void)
{
	char s1[] = "ABBA";
	char s2[] = "ABW";
	int	result1 = ft_strcmp(s1, s2);
	int result2 = strcmp(s1, s2);

	printf("%d\n", result1);
	printf("%d\n", result2);

	return (0);
}*/
