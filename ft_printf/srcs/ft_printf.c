/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:19:24 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:16:18 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	ft_types(t_format *struct_, va_list args)
{
	if (struct_->format[struct_->count] == '%')
		ft_write_percen(struct_, args);
	else if (struct_->format[struct_->count] == 'c')
		ft_write_char(struct_, args);
	else if (struct_->format[struct_->count] == 's')
		ft_write_string(struct_, args);
}

void	ft_verify(t_format *struct_, va_list args)
{
	while (struct_->count < struct_->size)
	{
		if (struct_->format[struct_->count] == '%')
			ft_verify_fwt(struct_, args);
		else if (struct_->format[struct_->count] != '%')
		{
			write(1, &struct_->format[struct_->count], 1);
			struct_->len++;
		}
		struct_->count++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_format	struct_;

	if (!format)
		return (-1);
	initialize(&struct_, format);
	va_start(args, format);
	ft_verify(&struct_, args);
	return (struct_.len);
}
