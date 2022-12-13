/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:25:49 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:48 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_ss(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = (*a);
	(*a) = temp;
	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = (*b);
	(*b) = temp;
	ft_printf("ss\n");
}
