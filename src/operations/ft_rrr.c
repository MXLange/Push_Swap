/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:25:59 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 13:06:54 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rrr(t_stack **a, t_stack **b)
{
	t_stack *temp_last;
	t_stack *temp_last_but_one;

	temp_last = ft_last_node(*a);
	temp_last_but_one = ft_last_but_one_node(*a);
	temp_last->next = (*a);
	(*a) = temp_last;
	temp_last_but_one->next = NULL;
	temp_last = ft_last_node(*b);
	temp_last_but_one = ft_last_but_one_node(*b);
	temp_last->next = (*b);
	(*b) = temp_last;
	temp_last_but_one->next = NULL;
	ft_putstr_fd("rrr\n", 1);
	//ft_printf("rrr\n");
}
