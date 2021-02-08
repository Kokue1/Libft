/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:06:11 by flemos-d          #+#    #+#             */
/*   Updated: 2020/12/03 03:35:00 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*trade;

	if (n == 0)
		return (str);
	trade = (unsigned char*)str;
	while (n)
	{
		*trade = (unsigned char)c;
		trade++;
		n--;
	}
	return (str);
}
