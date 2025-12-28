/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:29:49 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/28 15:41:59 by yrabhi           ###   ########.fr       */
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
void youness_function_to_test_rev_rotate()
{
	t_list *stack;
	stack = NULL;

	// Create a stack with elements 1, 2, 3
	node_to_lst(&stack, new_node(1));
	node_to_lst(&stack, new_node(2));
	node_to_lst(&stack, new_node(3));

	// Perform reverse rotate
	rra(&stack);

	// Print the stack to verify the result
	print_lst(&stack, 'a'); // Expected output: stack a : [3][1][2]

	// Free the stack
	free_lst(stack);
}
