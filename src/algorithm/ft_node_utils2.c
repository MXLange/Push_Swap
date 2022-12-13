/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:25:31 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:57:24 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_putnode_on_top_a_special(t_stack **a, size_t medium_point)
{
	t_stack	*temp;
	size_t	current_index;
	size_t	index_to_use;
	size_t	i;

	i = 0;
	temp = (*a);
	current_index = SIZE_MAX;
	while (temp)
	{
		if (temp->index < current_index)
		{
			current_index = temp->index;
			index_to_use = i;
		}
		i++;
		temp = temp->next;
	}
	if (index_to_use <= medium_point && index_to_use != 0)
		ft_putnode_on_top_a(&(*a), index_to_use, RA);
	else if (index_to_use != 0)
		ft_putnode_on_top_a(&(*a), index_to_use, RRA);
}
