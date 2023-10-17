/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:23:32 by clegros           #+#    #+#             */
/*   Updated: 2023/10/10 09:23:46 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	while (start < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (s);
}
