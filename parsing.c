/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:03:03 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/27 22:59:59 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_dupl(t_list *stack, int result)
{
	while (stack)
	{
		if (stack->content == result)
			return (1);
		stack = stack->next;
	}
	return (0);
}
static int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
		if (str[i] == '\0')
		{
			return (0);
		}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return 1;
}
static long	ft_atoi(char *str)
{
	long	i;
	int	sign;
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
		i++;
	}
	return (result * sign);
}
void	node_to_lst(t_list **lst, t_list *node)
{
	t_list *head;

	head = *lst;
	if (*lst == NULL)
		{
			*lst = node;
			return;
		}
	while ((*lst)->next)
		 *lst = (*lst)->next;
	(*lst)->next = node;
	*lst = head;
	}

int	is_validate_input(t_list **stack, int argc, char **argv)
{
	int	i;
	long	arg;
	char	**splite_str;
	int	j;

	i = 1;
	while (i < argc)
	{
		splite_str = ft_split(argv[i], ' ');
		j = 0;
		while(splite_str[j])
		{
			if (!is_number(splite_str[j]))
				return 0;
			arg = ft_atoi(splite_str[j]);
			if (arg < -2147483648 || arg > 2147483647)
				return (0);
			if (is_dupl(*stack, arg))
				return (0);
			node_to_lst(stack, new_node(arg));
			j++;
		}
		i++;
	}
	return (1);
}
