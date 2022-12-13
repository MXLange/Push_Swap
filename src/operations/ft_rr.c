/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:09 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:29 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rr(t_stack **a, t_stack **b)
{
	t_stack *temp;

	temp = ft_last_node(*a);
	temp->next = (*a);
	(*a) = (*a)->next;
	temp->next->next = NULL;
	temp = ft_last_node(*b);
	temp->next = (*b);
	(*b) = (*b)->next;
	temp->next->next = NULL;
	//ft_putstr_fd("rr\n", 1);
	ft_printf("rr\n");
}
