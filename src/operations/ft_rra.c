/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:05 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:58:32 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rra(t_stack **a)
{
	t_stack *temp_last;
	t_stack *temp_last_but_one;

	temp_last = ft_last_node(*a);
	temp_last_but_one = ft_last_but_one_node(*a);
	temp_last->next = (*a);
	temp_last_but_one->next = NULL;
	(*a) = temp_last;
	ft_printf("rra\n");
}
