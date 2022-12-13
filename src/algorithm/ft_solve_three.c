/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:33:23 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 23:07:38 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_solve_three(t_stack **a, t_stack **b)
{
	int	u;
	int	v;
	int	w;

	while (ft_is_sorted((*a)) == 0)
	{
		u = (*a)->index;
		v = (*a)->next->index;
		w = (*a)->next->next->index;
		if ((u < v && u < w && v > w) || (u < v && u > w && v > w))
		{
			if ((*b) && ft_stack_size((*b)) > 1 && (*b)->index < ft_last_node((*b))->index)
				ft_rrr(&(*a), &(*b));
			else
				ft_rra(&(*a));
		}
		else if (u > v && u < w && v < w)
		{
			if ((*b) && ft_stack_size((*b)) > 1 && (*b)->index < (*b)->next->index)
				ft_ss(&(*a), &(*b));
			else
				ft_sa(&(*a));
		}
		else if ((u > v && u > w && v < w) || (u > v && u > w && v > w))
		{
			if ((*b) && ft_stack_size((*b)) > 1 && ft_last_node(*b)->index > (*b)->index)
				ft_rr(&(*a), &(*b));
			else
				ft_ra(&(*a));
		}
	}
}
