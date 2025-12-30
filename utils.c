/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:19:02 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/30 10:43:49 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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

int	lst_size(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
