/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:31:18 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 16:10:02 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

ssize_t	ft_search_index(int begin, int end, t_stack *a)
{
	t_stack	*temp;
	ssize_t	i;

	temp = a;
	i = 0;
	while (temp)
	{
		if (temp->index >= (size_t)begin && temp->index <= (size_t)end)
			return (i);
		i++;
		temp = temp->next;
	}
	return (-1);
}
