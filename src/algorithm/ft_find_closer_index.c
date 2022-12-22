/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_closer_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:28:12 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 13:37:43 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

ssize_t	ft_find_closer_index(ssize_t index, t_stack **a)
{
	t_stack	*temp;
	ssize_t	current_node;
	ssize_t	current_difference;
	size_t	i;

	temp = (*a);
	current_node = -1;
	current_difference = SSIZE_MAX;
	i = 0;
	while (temp)
	{
		if ((ssize_t)temp->index > index
			&& current_difference > ((ssize_t)temp->index - index))
		{
			current_node = i;
			current_difference = (ssize_t)temp->index - index;
		}
		i++;
		temp = temp->next;
	}
	return (current_node);
}
