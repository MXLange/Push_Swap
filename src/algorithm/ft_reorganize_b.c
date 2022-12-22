/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorganize_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:29:36 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 16:09:32 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_reorganize_b(ssize_t bottom_index, size_t *rb_count,
						t_stack **a, t_stack **b)
{
	ssize_t	repetitions;
	ssize_t	i;

	i = 0;
	repetitions = ft_stack_size(*a) - bottom_index;
	while (i < (ssize_t) * rb_count)
	{
		if (bottom_index != -1 && repetitions < (ssize_t) * rb_count
			&& i < repetitions)
			ft_rrr(&(*a), &(*b));
		else
			ft_rrb(&(*b));
		i++;
	}
	*rb_count = 0;
}
