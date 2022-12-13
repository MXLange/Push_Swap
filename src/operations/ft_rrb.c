/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:02 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:36 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rrb(t_stack **b)
{
	t_stack *temp_last;
	t_stack *temp_last_but_one;

	temp_last = ft_last_node(*b);
	temp_last_but_one = ft_last_but_one_node(*b);
	temp_last->next = (*b);
	temp_last_but_one->next = NULL;
	(*b) = temp_last;
	ft_putstr_fd("rrb\n", 1);
}
