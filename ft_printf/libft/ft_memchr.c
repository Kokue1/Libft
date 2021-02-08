/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:01:54 by flemos-d          #+#    #+#             */
/*   Updated: 2021/01/08 08:10:39 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*trade;

	trade = (unsigned char *)str;
	i = 0;
	while (n--)
	{
		if (trade[i] == (unsigned char)c)
			return (trade + i);
		i++;
	}
	return (NULL);
}
