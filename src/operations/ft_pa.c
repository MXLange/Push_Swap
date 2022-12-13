/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:24 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:14 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack *temp;
	t_stack *temp2;

	temp2 = (*b)->next;
	temp = (*b);
	temp->next = (*a);
	(*a) = temp;
	(*b) = temp2;
	ft_putstr_fd("pa\n", 1);
}
