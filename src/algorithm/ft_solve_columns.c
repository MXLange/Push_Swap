/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_columns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:32:03 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:57:41 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_solve_columns(int *columns, t_stack **a, t_stack **b)
{
	ssize_t	top_index;
	ssize_t	bottom_index;
	size_t	begin;
	size_t	end;
	size_t	medium_point;
	size_t	use;
	size_t	rb_count;

	begin = 0;
	rb_count = 0;
	end = begin + 1;
	while (ft_stack_size((*a)) > 3)
	{
		top_index = ft_search_index(columns[begin], columns[end], (*a));
		bottom_index = ft_search_bottom_index(columns[begin], columns[end], (*a));
		if (top_index == -1 && bottom_index == -1)
		{
			begin += 2;
			end = begin + 1;
			bottom_index = ft_search_bottom_index(columns[begin], columns[end], (*a));
			ft_reorganize_b(bottom_index, rb_count, &(*a), &(*b));
			rb_count = 0;
			continue ;
		}
		medium_point = ft_stack_size((*a)) / 2;
		use = ft_decide_top_bottom(top_index, bottom_index, medium_point, ft_stack_size((*a)) - 1);
		if (use <= medium_point && use != 0)
			ft_putnode_on_top_a(&(*a), use, RA);
		else if (use != 0)
			ft_putnode_on_top_a(&(*a), use, RRA);
		rb_count += ft_push_solve_b(&(*a), &(*b), ((columns[begin] + columns[end]) / 2));
	}
	ft_reorganize_b(bottom_index, rb_count, &(*a), &(*b));
}
