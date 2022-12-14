/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:48:07 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/14 23:19:26 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_arraylen(char **av)
{
	size_t	len;

	len = 0;
	while (av[len] != NULL)
		len++;
	return (len);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_array(int *array, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (array[i] < array[j])
			{
				ft_swap(&(array[i]), &(array[j]));
			}
			j++;
		}
		i++;
	}
}

void	ft_put(t_stack **a, int	*array, size_t size)
{
	t_stack	*temp;
	size_t	i;

	temp = (*a);
	while (temp)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] == temp->num)
			{
				temp->index = i;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
}

void	ft_get_columns(int **columns, t_stack *a, int column_size)
{
	size_t	i;
	size_t	num_of_columns;

	num_of_columns = ft_stack_size(a) / column_size;
	if (ft_stack_size(a) % column_size)
		num_of_columns += 1;
	(*columns) = malloc(sizeof(int *) * (num_of_columns * 2));
	i = 0;
	while (i < (num_of_columns * 2) - 1)
	{
		if (i == 0)
			(*columns)[i] = i;
		else if (i == 1)
			(*columns)[i] = column_size - 1;
		else if (i % 2 == 0)
			(*columns)[i] = i * (column_size / 2);
		else
			(*columns)[i] = (i * (column_size / 2)) + (4 + ((column_size / 10 - 1) * 5));
		i++;
	}
	(*columns)[i] = ft_stack_size(a) - 1;
}
