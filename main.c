/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:48:16 by yrabhi            #+#    #+#             */
/*   Updated: 2026/01/02 18:15:11 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	print_lst(t_list **lst, char who)
// {
// 	t_list	*head;

// 	head = *lst;
// 	if (who == 'a')
// 		printf("stack a : ");
// 	else
// 		printf("stack b : ");
// 	while (*lst)
// 	{
// 		printf("[%d]", (*lst)->content);
// 		*lst = (*lst)->next;
// 	}
// 	printf("\n");
// 	*lst = head;
// }
static void	free_lst(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
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
		return (NULL);
	node->content = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}
int	main(int argc, char **argv)
{
	t_list	*lsta;
	t_list	*lstb;

	if (argc < 2)
		ft_error();
	lsta = NULL;
	lstb = NULL;
	if (!is_valid_input(&lsta, argc, argv))
	{
		free_lst(lsta);
		ft_error();
	}
	// print_lst(&lsta, 'a');
	// printf("\n");
	if (lst_size(lsta) == 2 || lst_size(lsta) == 3)
		sort_two_three(&lsta);
	else if (lst_size(lsta) == 4)
		sort_four(&lsta, &lstb);
	else if (lst_size(lsta) == 5)
		sort_five(&lsta, &lstb);
	else
		big_sort(&lsta, &lstb);
	// print_lst(&lsta, 'a');
	free_lst(lsta);
	free_lst(lstb);
	return (0);
}
