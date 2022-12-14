/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:25:56 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 13:07:00 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = (*a);
	(*a) = temp;
	ft_putstr_fd("sa\n", 1);
	//ft_printf("sa\n");
}
