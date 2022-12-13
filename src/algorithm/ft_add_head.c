/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_head.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:26:41 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:56:48 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../push_swap.h"

t_stack	*ft_add_head(t_stack *src, t_stack *dest)
{
	t_stack *temp;
	t_stack *temp2;

	temp2 = src->next;
	temp = ft_new_node(src->num);
	temp->next = dest;
	src = temp2;
	return (temp);
}
