/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:09:26 by clegros           #+#    #+#             */
/*   Updated: 2023/10/14 23:20:02 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_limit(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static unsigned int	ft_count(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while ((n / 10) > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	char		*str;

	if (n == 0 || n == -2147483648)
		return (ft_limit(n));
	count = ft_count(n);
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[count] = '\0';
	if (n < 0)
		count--;
	count -= 1;
	while (n != 0)
	{
		str[count] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (str);
}
