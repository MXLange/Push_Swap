/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:49:56 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 01:24:36 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_atoi_ps(const char *num_ptr, t_stack **stack, int ac, char **av)
{
	size_t	i;
	long	signal;
	long	number;

	i = 0;
	signal = 1;
	number = 0;
	while ((num_ptr[i] >= 7 && num_ptr[i] <= 13) || num_ptr[i] == ' ')
		i++;
	while (num_ptr[i] == '-' || num_ptr[i] == '+')
	{
		if (num_ptr[i] == '-')
			signal = -1;
		i++;
		if (num_ptr[i] == '-' || num_ptr[i] == '+')
			return (0);
	}
	while (num_ptr[i] <= '9' && num_ptr[i] >= '0')
	{
		number = (number * 10) + (num_ptr[i] - 48);
		i++;
	}
	if ((!(num_ptr[i] <= '9' && num_ptr[i] >= '0') && num_ptr[i] != '\0')
		|| !((number * signal) < 2147483647 && (number * signal) > -2147483648))
	{
		ft_putstr_fd("Error\n", 2);
		ft_free_all(ac, &(*av), &(*stack));
		exit(1);
	}
	return (number * signal);
}
