/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:07:01 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/10 13:28:06 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned_int(unsigned int n)
{
	if (n < 10)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr_unsigned_int(n / 10);
	ft_putchar(n % 10 + 48);
}
