/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:58:36 by yrabhi            #+#    #+#             */
/*   Updated: 2025/12/25 23:06:17 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
		write(2, "Error\n", 6);
		exit(1);
}

char	**ft_free(char **arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return NULL;
}
int	count_words(char *str)
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
char	*fill_arr(char *str, int *i)
{
	char	*word;
	int	len;
	int	j;

	len = 0;
	j = 0;
	if (!str[*i])
	return NULL;
	while (str[*i + len] && str[*i + len] != ' ')
		len++;
	word = malloc(len + 1);
	if (!word)
		return NULL;
	while (str[*i] && str[*i] != ' ')
		word[j++] = str[(*i)++];

	word[j] = '\0';
	return (word);
	}


char	**ft_split(char  *s, char c)
{
	char	**result;
	int	words;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
		return NULL;
	result = malloc((count_words(s) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == ' ')
			i++;
		result[j] = fill_arr(s, &i);
		if (!result[j])
		 return ft_free(result, j);
		j++;
	}
	result[j] = NULL;
	return result;
	}

	int	main()
	{

		char **str = ft_split("    eeeeeeee ffffffffffff jjjjjjjj       ", ' ');

		int i = 0;

		while (str[i])
		{
			printf("%s\n", str[i]);
			i++;
		}

	}
