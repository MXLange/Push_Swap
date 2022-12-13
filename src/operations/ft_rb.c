/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:12 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:26 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rb(t_stack **b)
{
	t_stack *temp;

	temp = ft_last_node((*b));
	temp->next = (*b);
	(*b) = (*b)->next;
	temp->next->next = NULL;
	ft_putstr_fd("rb\n", 1);
}
