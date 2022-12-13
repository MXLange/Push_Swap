/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:37:03 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 00:45:04 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_solve(t_stack **a, t_stack **b, int ac, char **av)
{
	int	*columns;
	int	column_size;

	columns = NULL;
	if (ft_arraylen(&(*av)) < 10)
		column_size = 10;
	else
		column_size = ft_arraylen(&(*av)) / 10;
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

void	ft_push_swap(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	size_t	size;

	stack_a = NULL;
	stack_a = ft_new_node(ft_atoi_ps(av[0], &stack_a, ac, &(*av)));
	stack_b = NULL;
	ft_start_stack(ac, &(*av), av + 1, &stack_a);
	size = ft_stack_size(stack_a);
	ft_put_index(&stack_a, size);
	if (ft_check_doubles(stack_a))
	{
		ft_putstr_fd("Error\n", 2);
		ft_free_stack(&stack_a);
		if (ac == 2)
			ft_free_av(&(*av));
		exit(1);
	}
	ft_solve(&stack_a, &stack_b, ac, &(*av));
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	else if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ft_push_swap(ac, &(*av));
	}
	else
		ft_push_swap(ac, av + 1);
	return (0);
}
