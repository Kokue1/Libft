/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:55:25 by flemos-d          #+#    #+#             */
/*   Updated: 2021/01/08 08:30:55 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int needle)
{
	int		i;

	i = -1;
	while (haystack[++i] != needle)
		if (haystack[i] == '\0')
			return (NULL);
	return ((char *)haystack + i);
}
