/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:42:23 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:57:20 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_new_node(int num)
{
	t_stack	*final;

	final = malloc(sizeof(t_stack));
	if (!final)
		return (NULL);
	final->index = 0;
	final->num = num;
	final->next = NULL;
	return (final);
}

t_stack	*ft_last_node(t_stack *a)
{
	t_stack	*temp;

	if (!a)
		return (NULL);
	temp = a;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

t_stack	*ft_last_but_one_node(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp->next->next != NULL)
		temp = temp->next;
	return (temp);
}

void	ft_putnode_on_top_a(t_stack **a, size_t index, int operation)
{
	if (operation == RA)
		while (index != 0)
		{
			ft_ra(&(*a));
			index--;
		}
	else
		while (index != ft_stack_size((*a)))
		{
			ft_rra(&(*a));
			index++;
		}
}

void	ft_putnode_on_top_a_final(t_stack **a, size_t index, int operation)
{
	if (operation == RA)
		while ((*a)->index != 0)
		{
			ft_ra(&(*a));
			index--;
		}
	else
		while ((*a)->index != 0)
		{
			ft_rra(&(*a));
			index++;
		}
}
