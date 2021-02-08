/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:40:51 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/03 22:15:57 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_flags(t_format *struct_, va_list args)
{
	if (struct_->format[struct_->count] == '-')
		ft_minus_flag(struct_, args);
	else if (struct_->format[struct_->count] == '0')
		ft_zero_flag(struct_, args);
}
