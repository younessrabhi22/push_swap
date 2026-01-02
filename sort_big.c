/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:12:08 by yrabhi            #+#    #+#             */
/*   Updated: 2026/01/02 17:24:34 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_to_b(t_list **lsta, t_list **lstb, int range)
{
    int i;

    i = 0;

    while (*lsta)
    {
        if ((*lsta)->index <= i)
        {
            pb(lsta, lstb);
			if ((*lstb) && (*lstb)->next)
                rb(lstb);
            i++;
        }
        else if ((*lsta)->index <= i + range)
        {
            pb(lsta, lstb);
            i++;
        }
        else
        {
            ra(lsta);
        }
    }
}

void	sort_to_a(t_list **lsta, t_list **lstb)
{
	int	max_index;
	int	max_pos;
	int	size_b;

	while (*lstb)
	{
		size_b = lst_size(*lstb);
		max_index = get_max_index(*lstb);
		max_pos = get_max_pos(*lstb, max_index);
		if (max_pos <= size_b / 2)
		{
			while ((*lstb)->index != max_index)
				rb(lstb);
		}
		else
		{
			while ((*lstb)->index != max_index)
				rrb(lstb);
		}
		pa(lsta, lstb);
	}
}

void	big_sort(t_list **lsta, t_list **lstb)
{
	int	range;

	range = get_range(*lsta);
	stack_indexes(lsta);
	sort_to_b(lsta, lstb, range);
	sort_to_a(lsta, lstb);
}
