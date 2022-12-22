/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_columns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:32:03 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 16:59:13 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_solve_columns3(ssize_t *top_index_use,
						ssize_t *bottom_index, t_stack **a)
{
	*top_index_use = ft_decide_top_bottom(*top_index_use,
			*bottom_index, ft_stack_size((*a)) / 2, ft_stack_size((*a)) - 1);
	if ((size_t) * top_index_use <= ft_stack_size((*a)) / 2
		&& *top_index_use != 0)
		ft_putnode_on_top_a(&(*a), *top_index_use, RA);
	else if ((size_t) * top_index_use != 0)
		ft_putnode_on_top_a(&(*a), *top_index_use, RRA);
}

void	ft_solve_columns2(size_t *begin, size_t *end)
{
	*begin += 2;
	*end = *begin + 1;
}

void	ft_solve_columns(int *columns, t_stack **a,
						t_stack **b, size_t *rb_count)
{
	ssize_t	top_index_use;
	ssize_t	bottom_index;
	size_t	begin;
	size_t	end;

	begin = 0;
	end = begin + 1;
	while (ft_stack_size((*a)) > 3)
	{
		top_index_use = ft_search_index(columns[begin], columns[end], (*a));
		bottom_index = ft_search_bottom_index(columns[begin],
				columns[end], (*a));
		if (top_index_use == -1 && bottom_index == -1)
		{
			ft_solve_columns2(&begin, &end);
			bottom_index = ft_search_bottom_index(columns[begin],
					columns[end], (*a));
			ft_reorganize_b(bottom_index, &(*rb_count), &(*a), &(*b));
			continue ;
		}
		*rb_count += ft_push_solve_b(&(*a), &(*b),
				((columns[begin] + columns[end]) / 2));
		ft_solve_columns3(&top_index_use, &bottom_index, &(*a));
	}
	ft_reorganize_b(bottom_index, &(*rb_count), &(*a), &(*b));
}
