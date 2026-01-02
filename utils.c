/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:19:02 by yrabhi            #+#    #+#             */
/*   Updated: 2026/01/02 18:02:53 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_hlp(char **split_str, t_list **stack)
{
	int	j;
	long	arg;

	j = 0;
	while (split_str[j])
		{
			if (!is_number(split_str[j]))
				return (free_split(split_str), 0);
			arg = ft_atoi(split_str[j]);
			if (arg < -2147483648 || arg > 2147483647)
				return (free_split(split_str), 0);
			if (has_duplicate(*stack, arg))
				return (free_split(split_str), 0);
			add_node_back(stack, new_node(arg));
			j++;
		}
		free_split(split_str);
		return (1);
}

int	get_min(t_list *lst)
{
	int min;

	min = lst->content;
	while(lst)
	{
		if (lst->content < min)
			min = lst->content;
		lst = lst->next;
	}
	return min;
}

int	get_max(t_list *lst)
{
	int max;

	max = lst->content;
	while(lst)
	{
		if (lst->content > max)
			max = lst->content;
		lst = lst->next;
	}
	return max;
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
