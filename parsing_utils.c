/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:58:36 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/29 14:50:01 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
		write(2, "Error\n", 6);
		exit(1);
 }

void	ft_free(char **result, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	count_words(char *str)
{
	int	i;
	int	words;

	if (!str)
	return 0;
	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return words;
}

static void	fill_arr(char *str, char **result, char delemiter, int *i, int res_index)
{
	int	size;
	int tmp;
	int	j;

	size = 0;
	tmp = *i;
	j = 0;
	while (str[*i] && (str[*i] != delemiter))
	{
		size++;
		(*i)++;
	}
	*result = malloc(size + 1);
	if (!*result)
	{
		ft_free(result, res_index);
		return ;
	}
	while (tmp < (*i))
	{
		(*result)[j] = str[tmp];
		j++;
		tmp++;
	}
	(*result)[j] = '\0';
}

char	**ft_split(char  *str, char delemiter)
{

	char	**result;
	int	words;
	int	i;
	int	k;

	i = 0;
	k = 0;
	words =  count_words(str);
	if (!str)
		return NULL;
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (k < words)
	{
		while  (str[i] && (str[i] == delemiter))
			i++;
		if (str[i])
			fill_arr(str, &result[k], delemiter, &i, k);
		k++;
	}
	result[k] = NULL;
	return result;
	}
