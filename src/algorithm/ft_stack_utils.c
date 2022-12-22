/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:48:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 13:36:45 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_stack_size(t_stack *stack)
{
	t_stack	*temp;
	size_t	count;

	count = 0;
	temp = stack;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

int	ft_is_sorted(t_stack *stack_a)
{
	t_stack	*temp;

	temp = stack_a;
	while (temp->next != NULL)
	{
		if (temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_check_doubles(t_stack *a)
{
	t_stack	*i;
	t_stack	*j;

	i = a;
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->index == j->index)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

void	ft_start_stack(int ac, char **to_free, char **av, t_stack **stack)
{
	t_stack	*temp;
	size_t	i;

	i = 0;
	temp = (*stack);
	while (av[i])
	{
		temp->next = ft_new_node(ft_atoi_ps(av[i++],
					&(*stack), ac, &(*to_free)));
		temp = temp->next;
	}
}

void	ft_put_index(t_stack **a, size_t size)
{
	t_stack	*temp;
	size_t	i;
	int		*array;

	array = malloc(sizeof(int *) * size);
	if (!array)
		return ;
	temp = (*a);
	i = 0;
	while (i < size)
	{
		array[i] = temp->num;
		temp = temp->next;
		i++;
	}
	ft_sort_array(array, size);
	ft_put(&(*a), array, size);
	free(array);
}
