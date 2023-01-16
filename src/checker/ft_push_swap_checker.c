/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:43:48 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/25 11:50:36 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_push_swap_checker(int ac, char **av)
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
	ft_get_instructions(&stack_a, &stack_b);
	if (ft_is_sorted(stack_a) == 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_free_all(ac, &(*av), &stack_a);
	if (stack_b)
		ft_free_stack(&stack_b);
}
