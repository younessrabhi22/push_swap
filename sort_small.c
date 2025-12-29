/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:35:21 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/28 17:21:23 by yrabhi           ###   ########.fr       */
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

// void	sort_three(t_list **lst)
// {
// 	if (!lst || !*lst || !(*lst)->next)
// 		return;
// 	if (lst_size(*lst) == 2)
// 	{
// 		if ((*lst)->content > (*lst)->next->content)
// 			sa(&lst);
// 		return;
// 	}


// }
// void	sort_four(t_list **lst)
// {

// }
// void	sort_five(t_list **lst)
// {

// }
