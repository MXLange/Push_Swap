/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:27:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/10 13:27:58 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	total_written;

	total_written = 0;
	ft_putnbr_unsigned_int(n);
	if (n == 0)
		total_written++;
	while (n != 0)
	{
		n /= 10;
		total_written++;
	}
	return (total_written);
}
