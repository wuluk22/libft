/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:11:40 by clegros           #+#    #+#             */
/*   Updated: 2023/10/10 19:01:11 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memalloc(size_t size)
{
	int	*mem;

	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	mem = 0;
	return (mem);
}
