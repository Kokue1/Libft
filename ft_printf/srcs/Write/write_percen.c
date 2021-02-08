/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_percen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:35:05 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/03 22:18:20 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_write_percen(t_format *struct_, va_list args)
{
	write(1, &struct_->format[struct_->count], 1);
	struct_->len++;
}
