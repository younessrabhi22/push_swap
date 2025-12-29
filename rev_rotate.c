/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:29:49 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/29 14:49:24 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_list **lst)
{
	t_list	*head;
	t_list	*tmp;
	t_list	*before_last;

	if (!lst || !*lst || !(*lst)->next)
		return;
	tmp = *lst;
	while ((*lst)->next)
	{
		if ((*lst)->next->next == NULL)
		before_last = *lst;
		*lst = (*lst)->next;
	}
	head = *lst;
	head->next = tmp;
	before_last->next = NULL;
	*lst = head;
}

void	rra(t_list **lsta)
{
	rev_rotate(lsta);
	write(1, "rra\n", 4);
}

void	rrb(t_list **lstb)
{
	rev_rotate(lstb);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **lsta, t_list **lstb)
{
	rev_rotate(lsta);
	rev_rotate(lstb);
	write(1, "rrr\n", 4);
}
