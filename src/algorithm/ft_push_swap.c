/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:43:48 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 13:45:47 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
