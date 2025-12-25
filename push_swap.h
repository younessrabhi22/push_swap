/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:02:51 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/25 13:02:56 by yrabhi           ###   ########.fr       */
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
void	push_swap(int argc, char **argv);
t_list	*new_node(int value);
void	ft_error(void);







#endif
