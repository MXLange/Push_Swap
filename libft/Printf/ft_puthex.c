/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:20:01 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/10 13:28:07 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_len(unsigned	int num, int *total_len)
{
	while (num != 0)
	{
		*total_len += 1;
		num = num / 16;
	}
}

void	ft_put_hex(unsigned int num, int type)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, type);
		ft_put_hex(num % 16, type);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (type == 'x')
				ft_putchar(num - 10 + 'a');
			if (type == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int n, int type)
{
	int	total_written;

	total_written = 0;
	if (n == 0)
		total_written += write(1, "0", 1);
	else
	{
		ft_put_hex(n, type);
		ft_hex_len(n, &total_written);
	}
	return (total_written);
}
