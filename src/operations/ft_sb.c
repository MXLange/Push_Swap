/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:25:53 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 13:07:06 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sb(t_stack **b)
{
	t_stack	*temp;

	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = (*b);
	(*b) = temp;
	ft_putstr_fd("sb\n", 1);
	//ft_printf("sb\n");
}
