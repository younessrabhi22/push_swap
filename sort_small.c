/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:35:21 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/30 10:54:15 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min_index(t_list *lst)
{
	int	index;
	int	min;

	index = 0;
	min = get_min(lst);
	while (lst)
	{
		if (lst->content == min)
			return (index);
		index++;
		lst = lst->next;
	}
	return (-1);
}

void	sort_two_three(t_list **lst)
{
	int	max;

	max = get_max(*lst);
	if (lst_size(*lst) == 2)
	{
		if ((*lst)->content > (*lst)->next->content)
			sa(lst);
		return ;
	}
	if ((*lst)->content == max)
		ra(lst);
	else if ((*lst)->next->content == max)
		rra(lst);
	if ((*lst)->content > (*lst)->next->content)
		sa(lst);
}

void	sort_four(t_list **lsta, t_list **lstb)
{
	int	min_index;

	min_index = get_min_index(*lsta);
	if (min_index == 1)
		sa(lsta);
	else if (min_index == 2)
	{
		rra(lsta);
		rra(lsta);
	}
	else if (min_index == 3)
		rra(lsta);
	pb(lsta, lstb);
	sort_two_three(lsta);
	pa(lsta, lstb);
}

void	sort_five(t_list **lsta, t_list **lstb)
{
	int	min_index;

	min_index = get_min_index(*lsta);
	if (min_index == 1)
		sa(lsta);
	else if (min_index == 2)
	{
		ra(lsta);
		ra(lsta);
	}
	else if (min_index == 3)
	{
		rra(lsta);
		rra(lsta);
	}
	else if (min_index == 4)
		rra(lsta);
	pb(lsta, lstb);
	sort_four(lsta, lstb);
	pa(lsta, lstb);
}
