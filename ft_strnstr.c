/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:23:10 by clegros           #+#    #+#             */
/*   Updated: 2023/10/14 20:24:35 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && needle[j] != '\0' && i < l)
	{
		if (haystack[i] == needle[j])
		{
			i ++;
			j ++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (needle[j] == '\0')
		return ((char *)&haystack[i - j]);
	return (NULL);
}
