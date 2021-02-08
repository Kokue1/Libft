/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:01:30 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:54:45 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int needle)
{
	int	i;

	i = ft_strlen(haystack);
	if (needle == '\0')
		return ((char *)haystack + i);
	while (haystack[i] != needle && i >= 0)
		i--;
	if (needle == haystack[i])
		return ((char *)haystack + i);
	return (NULL);
}
