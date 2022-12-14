/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:44:20 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/14 23:22:05 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_solve(t_stack **a, t_stack **b, int ac, char **av)
{
	int	*columns;
	int	column_size;

	columns = NULL;
	column_size = ft_get_num_of_columns(&(*av));
	if (!(ft_is_sorted((*a))) && ft_arraylen(&(*av)) == 2)
		ft_sa(&(*a));
	else if (!(ft_is_sorted((*a))) && ft_arraylen(&(*av)) == 3)
		ft_solve_three(&(*a), &(*b));
	else if (!(ft_is_sorted((*a))) && (ft_arraylen(&(*av)) == 5 || ft_arraylen(&(*av)) == 4))
		ft_solve_four_five(&(*a), &(*b));
	else if (!(ft_is_sorted((*a))) && ft_arraylen(&(*av)) > 5)
	{
		ft_get_columns(&columns, (*a), column_size);
		ft_solve_columns(columns, &(*a), &(*b));
		ft_solve_three(&(*a), &(*b));
		ft_return_in_order(&(*a), &(*b));
	}
	free(columns);
	ft_free_all(ac, &(*av), &(*a));
}
