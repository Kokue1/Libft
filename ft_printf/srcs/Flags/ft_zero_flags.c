/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:09:18 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/03 22:15:08 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_zero_flag(t_format *struct_, va_list args)
{
	char	temp;
	int		i;

	temp = struct_->format[struct_->count];
	while (ft_strchr(FLAGS, struct_->format[struct_->count]))
		struct_->count++;
	struct_->flag = temp;
	struct_->count -= 1;
}
