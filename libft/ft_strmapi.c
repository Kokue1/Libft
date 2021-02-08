/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 06:53:14 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:54:17 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		trade_size;
	unsigned int		i;
	char				*trade;

	i = 0;
	if (!s)
		return (NULL);
	trade_size = ft_strlen(s);
	trade = malloc(sizeof(char) * (trade_size + 1));
	if (trade == NULL)
		return (NULL);
	while (s[i])
	{
		trade[i] = f(i, s[i]);
		i++;
	}
	trade[i] = '\0';
	return (trade);
}
