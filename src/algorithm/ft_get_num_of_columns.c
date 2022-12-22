/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num_of_columns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:01:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/22 15:25:10 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_get_num_of_columns(char **av)
{
	if (ft_arraylen(&(*av)) < 100)
		return (10);
	else if (ft_arraylen(&(*av)) < 200)
		return (20);
	else if (ft_arraylen(&(*av)) < 300)
		return (30);
	else if (ft_arraylen(&(*av)) < 400)
		return (40);
	else if (ft_arraylen(&(*av)) < 500)
		return (50);
	else if (ft_arraylen(&(*av)) < 1000)
		return (100);
	else if (ft_arraylen(&(*av)) < 2000)
		return (200);
	else if (ft_arraylen(&(*av)) < 5000)
		return (500);
	return (1000);
}
