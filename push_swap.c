/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:02:43 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/25 13:19:10 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_lst(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
t_list	*new_node(int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->content = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}
void	push_swap(int argc, char **argv)
{
	t_list *lst;
	t_list	*head;
	lst = NULL;

	head = lst;
	if (!is_validate_input(&lst, argc, argv))
		{
			free_lst(lst);
			ft_error();
		}

		while (head)
		{
			printf("%d\n", head->content);
				head = head->next;
		}

		free_lst(lst);

}
