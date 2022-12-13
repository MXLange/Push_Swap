/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_four_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:32:44 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 23:03:17 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_solve_four_five(t_stack **a, t_stack **b)
{
	while (ft_stack_size((*a)) > 3)
		ft_pb(&(*a), &(*b));
	ft_solve_three(&(*a), &(*b));
	ft_return_in_order(&(*a), &(*b));
}
