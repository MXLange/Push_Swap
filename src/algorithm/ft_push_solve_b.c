/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_solve_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:28:57 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/19 21:40:01 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_push_solve_b(t_stack **a, t_stack **b, int column_mid_point)
{
	ft_pb(&(*a), &(*b));
	if ((*b)->index > (size_t)column_mid_point && ft_stack_size((*b)) > 1)
	{
		if ((*a)->index > (*a)->next->index)
			ft_rr(&(*a), &(*b));
		else
			ft_rb(&(*b));
		return (1);
	}
	return (0);
}
