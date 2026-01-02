/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:14:50 by yrabhi            #+#    #+#             */
/*   Updated: 2026/01/02 17:57:04 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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

void	stack_indexes(t_list **stack)
{
	t_list	*head;
	t_list	*current;
	int	count;

	head = *stack;
	while (head)
	{
		count = 0;
		current = *stack;
		while (current)
		{
			if (head->content > current->content)
				count++;
			current = current->next;
		}
		head->index = count;
		head = head->next;
	}
}


int	get_range(t_list *lst)
{
	int	range;

	range = lst_size(lst);
	if (range <= 100)
		return	15;
	return 35;
}

int	get_max_index(t_list *lstb)
{
	int	max;

	max = lstb->index;
	while (lstb)
	{
		if (lstb->index > max)
			max = lstb->index;
		lstb = lstb->next;
	}
	return max;
}
int	get_max_pos(t_list *lstb, int max_index)
{
	int	i;

	i = 0;
	while (lstb)
	{
		if (lstb->index == max_index)
			return i;
		i++;
		lstb = lstb->next;
	}
	return i;
}
