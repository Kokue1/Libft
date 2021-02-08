/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:06:49 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:50:08 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*trade;
	unsigned char	*trade2;

	if (!dest && !src)
		return (NULL);
	trade = (unsigned char*)src;
	trade2 = (unsigned char*)dest;
	while (n)
	{
		*trade2 = *trade;
		trade++;
		trade2++;
		n--;
	}
	return (dest);
}
