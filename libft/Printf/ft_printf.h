/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:15:12 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 16:16:54 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

char	*ft_itoa(int n);
int		ft_printf(const char *input, ...);
int		ft_putchar(int c);
int		ft_puthex(unsigned int n, int type);
void	ft_putnbr_unsigned_int(unsigned int n);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long long ptr);
int		ft_putstr(char *s);
int		ft_putuns(unsigned int n);

#endif
