/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:13:46 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/29 14:49:16 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **lst)
{
	t_list *head;
	t_list *tmp;

	if (!*lst || !lst || !(*lst)->next)
		return;
	head = (*lst)->next;
	tmp = *lst;
	while ((*lst)->next)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = tmp;
	tmp->next = NULL;
	*lst = head;
}

void	ra(t_list **lsta)
{
		rotate(lsta);
		write(1, "ra\n", 3);
}

void	rb(t_list **lstb)
{
		rotate(lstb);
		write(1, "rb\n", 3);
}

void	rr(t_list **lsta, t_list **lstb)
{
		rotate(lsta);
		rotate(lstb);
		write(1, "rr\n", 3);
}
