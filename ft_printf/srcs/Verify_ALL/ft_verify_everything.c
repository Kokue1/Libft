/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_everything.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:59:42 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 18:31:38 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_verify_fwt(t_format *struct_, va_list args)
{
	while (struct_->format[struct_->count])
	{
		struct_->count++;
		if (struct_->format[struct_->count] == '\0')
		{
			struct_->len = -1;
			return ;
		}
		else if (ft_strchr(FLAGS, struct_->format[struct_->count]))
			ft_flags(struct_, args);
		else if (ft_strchr(WIDTH, struct_->format[struct_->count]))
			ft_width(struct_, args);
		else if (ft_strchr(TWINKLETOES, struct_->format[struct_->count]))
			ft_width(struct_, args);
		else if (ft_strchr(PRECISION, struct_->format[struct_->count]))
			ft_precision(struct_, args);
		else if (ft_strchr(TYPES, struct_->format[struct_->count]))
		{
			ft_types(struct_, args);
			return ;
		}
		else
			return ;
	}
}
