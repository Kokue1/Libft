/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:09:51 by flemos-d          #+#    #+#             */
/*   Updated: 2021/03/01 10:09:52 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int needle)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)haystack;
	while (haystack[i] != needle)
	{
		if (haystack[i] == '\0')
			return (NULL);
		i++;
		new_str++;
	}
	return (new_str);
}
