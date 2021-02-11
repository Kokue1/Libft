/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 00:22:39 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/11 18:40:43 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     absolute_value(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}
 
int     get_len(int nbr)
{
    int len = 0;
    if (nbr <= 0)
        ++len;
    while (nbr != 0)
    {
        ++len;
        nbr = nbr / 10;
    }
    return (len);
}
 
char    *ft_itoa(int nbr)
{
    char *result;
    int len;
 
    len = get_len(nbr);
    result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
    result[len] = '\0';
    if (nbr < 0)
        result[0] = '-';
    else if (nbr == 0)
        result[0] = '0';
    while (nbr != 0)
    {
        --len;
        result[len] = absolute_value(nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return (result);
}

 #include <limits.h>
 
int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;

	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;

	ft_itoa(number1);
	ft_itoa(number2);
	ft_itoa(number3);
	ft_itoa(number4);
	ft_itoa(number5);
	ft_itoa(number6);
	ft_itoa(number7);
	ft_itoa(number8);
	ft_itoa(number9);
	ft_itoa(number10);
	ft_itoa(number11);
	ft_itoa(number12);

/*
	for (int i = -100; i <= 0 ; i++)
	{
		ft_itoa(i);
	}
	for (int i = 0; i <= 100 ; i++)
	{
		ft_itoa(i);
	}
*/
	return (0);
}