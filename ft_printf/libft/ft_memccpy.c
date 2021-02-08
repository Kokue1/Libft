/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:47:32 by flemos-d          #+#    #+#             */
/*   Updated: 2020/12/19 13:49:53 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	unsigned char	*trade;
	unsigned char	*trade2;
	size_t			i;

	i = 0;
	trade = (unsigned char*)src;
	trade2 = (unsigned char*)dest;
	while (i < count)
	{
		*trade2 = *trade;
		if ((*trade == (unsigned char)c))
			return (dest + i + 1);
		trade++;
		i++;
		trade2++;
	}
	return (NULL);
}
