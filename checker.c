/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:58:17 by msprenge          #+#    #+#             */
/*   Updated: 2022/12/13 14:17:14 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_free_f(char *file, char *temp)
{
	char	*final;

	final = ft_strjoin(file, temp);
	free(file);
	return (final);
}

char	*read_file(int fd, char *file)
{
	char	*temp;
	ssize_t	read_bytes;

	if (!file)
		file = ft_calloc(1, 1);
	temp = ft_calloc((1000 + 1), sizeof(char));
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, temp, 1000);
		if (read_bytes == -1)
		{
			free(temp);
			free(file);
			return (NULL);
		}
		temp[read_bytes] = 0;
		file = ft_free_f(file, temp);
	}
	free(temp);
	return (file);
}

size_t	word_count(int fd, char c)
{
	char	*file;
	size_t	count;
	size_t	i;

	file = read_file(fd);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			count++;
	}
	free(file);
	return(count);
}


void	ft_check(int fd)
{
	char	*comand;
	size_t	words;
	ssize_t	i;

	words = word_count(fd, '\n');
	i = -1;
	while (i++ < (ssize_t)words)
		comand = get_next_line(fd);

}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	else if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ft_push_swap(ac, &(*av));
	}
	else
		ft_push_swap(ac, av + 1);
	ft_check(1);
	return (0);
}
