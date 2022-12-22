/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_zero_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:28:33 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 13:35:10 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

ssize_t	ft_find_zero_index(t_stack *a)
{
	t_stack	*temp;
	ssize_t	i;

	i = 0;
	temp = a;
	while (temp)
	{
		if (temp->index == 0)
			return (i);
		i++;
		temp = temp->next;
	}
	return (-1);
}
