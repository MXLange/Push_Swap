/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_bottom_index.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:30:27 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 13:39:15 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

ssize_t	ft_search_bottom_index(int begin, int end, t_stack *a)
{
	t_stack	*temp;
	ssize_t	i;
	ssize_t	final;

	temp = a;
	i = 0;
	final = -1;
	while (temp)
	{
		if (temp->index >= (size_t)begin
			&& temp->index <= (size_t)end)
			final = i;
		i++;
		temp = temp->next;
	}
	return (final);
}
