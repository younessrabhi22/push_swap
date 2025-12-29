/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:02:51 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/29 14:08:17 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
	int	content;
	int index;
	struct s_list  *next;
}	t_list;

int	is_validate_input(t_list **stack, int argc, char **argv);
void	ft_error(void);
t_list	*new_node(int value);
void	node_to_lst(t_list **lst, t_list *node);
void	ft_error(void);
char	**ft_split(char  *str, char delemiter);
void	free_split(char **arr);
int	main(int argc, char **argv);
void	ft_free(char **result, int index);

void	sa(t_list **lst);
void	sb(t_list **lst_b);
void	ss(t_list **lst_a, t_list **lst_b);

void	pa(t_list **lsta, t_list **lstb);
void	pb(t_list **lsta, t_list **lstb);

void	ra(t_list **lsta);
void	rb(t_list **lstb);
void	rr(t_list **lsta, t_list **lstb);

void	rra(t_list **lsta);
void	rrb(t_list **lstb);
void	rrr(t_list **lsta, t_list **lstb);

#endif
