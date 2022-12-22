/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_in_order.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:30:02 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 13:38:27 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_return_in_order(t_stack **a, t_stack **b)
{
	ssize_t	medium_point;
	ssize_t	index;

	while ((*b))
	{
		medium_point = ft_stack_size((*a)) / 2;
		index = ft_find_closer_index((*b)->index, &(*a));
		if (index == -1)
			ft_putnode_on_top_a_special(&(*a), medium_point);
		else if (index <= medium_point && index != 0)
			ft_putnode_on_top_a(&(*a), index, RA);
		else if (index != 0)
			ft_putnode_on_top_a(&(*a), index, RRA);
		ft_pa(&(*a), &(*b));
		if (index == -1)
			ft_ra(&(*a));
	}
	medium_point = ft_stack_size((*a)) / 2;
	index = ft_find_zero_index((*a));
	if (index <= medium_point && index != 0)
		ft_putnode_on_top_a_final(&(*a), index, RA);
	else if (index != 0)
		ft_putnode_on_top_a_final(&(*a), index, RRA);
}
