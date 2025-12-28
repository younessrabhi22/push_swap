/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:13:32 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/28 14:21:17 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **lst1, t_list **lst2)
{
	t_list	*head;
	if (!lst1 || !*lst1)
		return;
	head = (*lst1)->next;
	(*lst1)->next = *lst2;
	 *lst2 = *lst1;
	 *lst1 = head;
}
void	pa(t_list **lsta, t_list **lstb)
{
	push(lstb, lsta);
	write(1, "pa\n", 3);
}
void	pb(t_list **lsta, t_list **lstb)
{
	push(lsta, lstb);
	write(1, "pb\n", 3);
}
