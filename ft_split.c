/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:13:28 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/14 12:13:28 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s,char c)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
		res++;
	i++;
	while (s[i])
	{
		if(s[i - 1] == c && s[i] != c)
			res++;
		i++;
	}
	return (res);
}

static size_t	ft_worldlen(char const *s, char c, size_t start)
{
	size_t	len;

	len = start;
	while (s[len] != c || s[len])
		len++;
	return (len);
}

static char	*ft_minisplit(char const *s, char c, size_t *i)
{
	size_t	len;
	size_t	j;
	char	*res;

	j = 0;
	len = ft_worldlen(s, c, *i);
	res = (char *) malloc ((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[*i] || s[*i] != c)
	{
		res[j] = s[*i];
		i++;
		j++;
	}
	res[j] = 0;
	return (res);
}

static void	ft_die(char **res)
{
	int	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		j;
	size_t	i;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	res = (char **) malloc((words + 1) * sizeof(char *));
	if (!s[0] || !res)
		return (res);
	while (j < words)
	{
		if (s[i] != c)
		{
			res[j++] = ft_minisplit(s, c, &i);
			if (!res[j])
				ft_die(res);
			j++;
		}
		else
			i++;
	}
	return (res);
}

#include <stdio.h>
int main(void)
{
	char	*test = "  t est a        aaaaa";
	char	**res;
	int		i;
	size_t len;

	i = 0;
	printf("%p \n", res = ft_split(test, ' '));
	while(i < 4)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return 0;
}