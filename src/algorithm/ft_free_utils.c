/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:06:40 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 23:55:33 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_free_all(int ac, char **av, t_stack **stack)
{
	if (ac == 2)
		ft_free_av(&(*av));
	ft_free_stack(&(*stack));
}

void	ft_free_av(char **av)
{
	size_t	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(&(*av));
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!(*stack))
		return ;
	while ((*stack))
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		free(temp);
	}
}
