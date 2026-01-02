/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:03:03 by yrabhi            #+#    #+#             */
/*   Updated: 2026/01/02 18:11:08 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicate(t_list *stack, int result)
{
	while (stack)
	{
		if (stack->content == result)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(char *str)
{
	long	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if ((sign == 1 && result > 2147483647) || (sign == -1 && result > 2147483648))
			return 2147483648;
		i++;
	}
	return (result * sign);
}

void	add_node_back(t_list **lst, t_list *node)
{
	t_list	*head;

	head = *lst;
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = node;
	*lst = head;
}

int	is_valid_input(t_list **stack, int argc, char **argv)
{
	int		i;
	//long	arg;
	char	**split_str;
	//int		j;

	i = 1;
	while (i < argc)
	{
		split_str = ft_split(argv[i++], ' ');
		//j = 0;
		if (!split_str || !split_str[0])
		{
					free_split(split_str);
								return 0;
		}
		if (!check_hlp(split_str, stack))
			return (0);
		// while (split_str[j])
		// {
		// 	if (!is_number(split_str[j]))
		// 		return (free_split(split_str), 0);
		// 	arg = ft_atoi(split_str[j]);
		// 	if (arg < -2147483648 || arg > 2147483647)
		// 		return (free_split(split_str), 0);
		// 	if (has_duplicate(*stack, arg))
		// 		return (free_split(split_str), 0);
		// 	add_node_back(stack, new_node(arg));
		// 	j++;
		// }
		// free_split(split_str);
	}
	return (1);
}
