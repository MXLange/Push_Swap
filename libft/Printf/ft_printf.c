/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:28:15 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 16:17:34 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_treat(char input, va_list av)
{
	int	total_written;

	total_written = 0;
	if (input == 'c')
		total_written += ft_putchar(va_arg(av, int));
	else if (input == 's')
		total_written += ft_putstr(va_arg(av, char *));
	else if (input == 'p')
		total_written += ft_putptr(va_arg(av, unsigned long long));
	else if (input == 'd' || input == 'i')
		total_written += ft_putnbr(va_arg(av, int));
	else if (input == 'u')
		total_written += ft_putuns(va_arg(av, unsigned int));
	else if (input == 'x' || input == 'X')
		total_written += ft_puthex(va_arg(av, unsigned int), input);
	else if (input == '%')
		total_written += write(1, "%", 1);
	return (total_written);
}

int	type_check(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd')
		|| (c == 'i') || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_printf(const char *input, ...)
{
	va_list	av;
	size_t	i;
	int		total_len;

	if (!input)
		return (-1);
	va_start(av, input);
	i = 0;
	total_len = 0;
	while (input[i])
	{
		if (input[i] != '%' )
			total_len += write(1, &input[i], 1);
		else if (input[i] == '%' && !type_check(input[i + 1]))
			total_len += write(1, "%", 1);
		else if (input[i] == '%' && type_check(input[i + 1]))
		{
			i++;
			total_len += type_treat(input[i], av);
		}
		i++;
	}
	va_end(av);
	return (total_len);
}
