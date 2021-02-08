/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 05:37:17 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:45:50 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned char	*trade;
	unsigned char	*trade2;

	i = 0;
	trade = (unsigned char *)str1;
	trade2 = (unsigned char *)str2;
	while (n--)
	{
		if (trade[i] != trade2[i])
			return (trade[i] - trade2[i]);
		i++;
	}
	return (0);
}
