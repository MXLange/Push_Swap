/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decide_top_bottom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:27:38 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/12 18:57:03 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_decide_top_bottom(size_t top, size_t bottom, size_t medium_point, size_t last_index)
{
	if (top == bottom || (top < medium_point && bottom < medium_point) || (top <= last_index - bottom))
		return (top);
	else
		return (bottom);
}
