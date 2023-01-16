/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:07:11 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 20:02:03 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include "../../libft/GetNextLine/get_next_line.h"

void	ft_execute_instructions(t_stack **a, t_stack **b, char *instruction)
{
	size_t	len;

	len = ft_strlen(instruction);
	if (ft_strncmp(instruction, "sa", len - 1) == 0)
		ft_sa(&(*a));
	else if (ft_strncmp(instruction, "sb", len - 1) == 0)
		ft_sb(&(*b));
	else if (ft_strncmp(instruction, "ss", len - 1) == 0)
		ft_ss(&(*a), &(*b));
	else if (ft_strncmp(instruction, "pa", len - 1) == 0)
		ft_pa(&(*a), &(*b));
	else if (ft_strncmp(instruction, "pb", len - 1) == 0)
		ft_pb(&(*a), &(*b));
	else if (ft_strncmp(instruction, "rra", len - 1) == 0)
		ft_rra(&(*a));
	else if (ft_strncmp(instruction, "rrb", len - 1) == 0)
		ft_rrb(&(*b));
	else if (ft_strncmp(instruction, "rrr", len - 1) == 0)
		ft_rrr(&(*a), &(*b));
	else if (ft_strncmp(instruction, "ra", len - 1) == 0)
		ft_ra(&(*a));
	else if (ft_strncmp(instruction, "rb", len - 1) == 0)
		ft_rb(&(*b));
	else if (ft_strncmp(instruction, "rr", len - 1) == 0)
		ft_rr(&(*a), &(*b));
	else
		return;
}

void	ft_get_instructions(t_stack **a, t_stack **b)
{
	char *instruction;

	while (1)
	{
		instruction = get_next_line(STDIN_FILENO);
		if (!instruction)
			break ;
		ft_execute_instructions(&(*a), &(*b), instruction);
		free(instruction);
	}
}
