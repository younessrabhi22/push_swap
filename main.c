#include "push_swap.h"

void	print_lst(t_list **lst, char who)
{
	t_list *head;
	head = *lst;
	if (who == 'a')
		printf("stack a : ");
	else
		printf("stack b : ");
	while (*lst)
		{
			printf("[%d]", (*lst)->content);
			*lst = (*lst)->next;
		}
		printf("\n");
	*lst = head;
}

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



int	main(int argc, char **argv)
{
	t_list *lsta;
	t_list	*lstb;
	//t_list	*lstb;
	//t_list	*head;

	lsta = NULL;
	lstb = NULL;
	for (int i = 1; i <= 4; i++)
		node_to_lst(&lstb, new_node(i));
	if (!is_validate_input(&lsta, argc, argv))
		{
			free_lst(lsta);
			ft_error();
		}

		print_lst(&lsta, 'a');
		print_lst(&lstb, 'b');
		printf("\n");
		rrr(&lsta, &lstb);
		printf("\n");
		print_lst(&lsta, 'a');
		print_lst(&lstb, 'b');

		//print_lst(&lsta, 'a');

		// printf("\n");

		// print_lst(&lstb, 'b');
		// pb(&lsta, &lstb);
		// print_lst(&lstb, 'b');



		free_lst(lsta);
	return 0;
}
