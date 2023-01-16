/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:25:05 by msprenge          #+#    #+#             */
/*   Updated: 2023/01/16 12:26:55 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"
# include "libft/Printf/ft_printf.h"

# define ERROR "Error\n"
# define PA 1
# define PB 2
# define SA 3
# define SB 4
# define RA 5
# define RB 6
# define RRA 7
# define RRB 8

typedef struct s_stack
{
	size_t			index;
	int				num;
	struct s_stack	*next;
}				t_stack;

void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);

void	ft_solve(t_stack **a, t_stack **b, int ac, char **av);
void	ft_push_swap(int ac, char **av);

void	ft_push_swap_checker(int ac, char **av);
void	ft_get_instructions(t_stack **a, t_stack **b);
void	ft_execute_instructions(t_stack **a, t_stack **b, char *instruction);

size_t	ft_arraylen(char **av);
void	ft_swap(int *a, int *b);
void	ft_sort_array(int *array, size_t size);
void	ft_put(t_stack **a, int	*array, size_t size);
void	ft_get_columns(int **columns, t_stack *a, int column_size);
int		ft_get_num_of_columns(char **av);

int		ft_atoi_ps(const char *num_ptr, t_stack **stack, int ac, char **av);

size_t	ft_stack_size(t_stack *stack);
int		ft_is_sorted(t_stack *stack_a);
int		ft_check_doubles(t_stack *a);
void	ft_start_stack(int ac, char **to_free, char **av, t_stack **stack);
void	ft_put_index(t_stack **a, size_t size);

void	ft_solve_three(t_stack **a, t_stack **b);

t_stack	*ft_new_node(int num);
t_stack	*ft_last_node(t_stack *a);
t_stack	*ft_last_but_one_node(t_stack *a);
void	ft_putnode_on_top_a(t_stack **a, size_t index, int operation);
void	ft_putnode_on_top_a_final(t_stack **a, size_t index, int operation);

void	ft_solve_four_five(t_stack **a, t_stack **b);
ssize_t	ft_search_index(int begin, int end, t_stack *a);
void	ft_solve_columns(int *columns, t_stack **a,
			t_stack **b, size_t *rb_count);
ssize_t	ft_search_bottom_index(int begin, int end, t_stack *a);
void	ft_return_in_order(t_stack **a, t_stack **b);
void	ft_reorganize_b(ssize_t bottom_index, size_t *rb_count,
			t_stack **a, t_stack **b);
size_t	ft_push_solve_b(t_stack **a, t_stack **b, int column_mid_point);
void	ft_putnode_on_top_a_special(t_stack **a, size_t medium_point);
ssize_t	ft_find_zero_index(t_stack *a);
ssize_t	ft_find_closer_index(ssize_t index, t_stack **a);
size_t	ft_decide_top_bottom(size_t top, size_t bottom,
			size_t medium_point, size_t last_index);

void	ft_free_all(int ac, char **av, t_stack **stack);
void	ft_free_columns(int	**columns);
void	ft_free_av(char **av);
void	ft_free_stack(t_stack **stack);

void	ft_radix(t_stack **a, t_stack **b);
int		get_max_bits(int max_number);


#endif
