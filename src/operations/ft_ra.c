/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:15 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:23 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack *temp;

	temp = ft_last_node((*a));
	temp->next = (*a);
	(*a) = (*a)->next;
	temp->next->next = NULL;
	ft_putstr_fd("ra\n", 1);
}
