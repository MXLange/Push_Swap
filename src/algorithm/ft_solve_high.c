/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_high.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:02:06 by msprenge          #+#    #+#             */
/*   Updated: 2023/01/16 12:26:40 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	get_max_bits(int max_number)
{
	int	max_bits;

	max_bits = 0;
	while ((max_number >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix(t_stack **a, t_stack **b)
{
	unsigned int	max_number;
	unsigned int	max_bits;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	max_number = ft_stack_size((*a));
	max_bits = get_max_bits(max_number);
	while (i < max_bits)
	{
		j = 0;
		while (j < max_number)
		{
			if (((*a)->index >> i & 1) == 0)
				ft_pb(&(*a), &(*b));
			else
				ft_ra(&(*a));
			j++;
		}
		while (ft_stack_size((*b)))
			ft_pa(&(*a), &(*b));
		i++;
	}
}
