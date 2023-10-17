/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:20:23 by clegros           #+#    #+#             */
/*   Updated: 2023/10/11 22:01:11 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hello";
    char d[11] = "julo";

    printf("%u\n", ft_strlcat(d, s, 8));
    printf("%s\n\n", d);

	char s1[] = "Hello";
	char d1[11] = "julo";

    printf("%lu\n", strlcat(d1, s1, 8));
    printf("%s\n\n", d1);
    return 0;
}*/
