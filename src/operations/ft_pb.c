/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:21 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:19 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack *temp;
	t_stack *temp2;

	temp2 = (*a)->next;
	temp = (*a);
	temp->next = (*b);
	(*b) = temp;
	(*a) = temp2;
	ft_printf("pb\n");
}
