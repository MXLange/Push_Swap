/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:38:03 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/10 13:28:02 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_print_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_print_ptr(num / 16);
		ft_print_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int	printed_len;

	printed_len = 0;
	if (ptr == 0)
		printed_len += write(1, "(nil)", 5);
	else
	{
		printed_len += write(1, "0x", 2);
		ft_print_ptr(ptr);
		printed_len += ft_ptr_len(ptr);
	}
	return (printed_len);
}
