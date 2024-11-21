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

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	res;

	res = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
		res++;
	i++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			res++;
		i++;
	}
	return (res);
}

static size_t	ft_worldlen(char const *s, char c, size_t start)
{
	size_t	len;

	len = start;
	while (s[len] != c && s[len])
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
	res = (char *) malloc ((len - *i + 1) * sizeof(char));
	if (res == NULL)
		return (res);
	while (*i < len)
	{
		res[j] = s[*i];
		*i += 1;
		j++;
	}
	res[j] = 0;
	return (res);
}

static void	*ft_die(char **res)
{
	size_t	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	res = ft_calloc(words + 1, sizeof(char *));
	if (!s[0] || !res)
		return (res);
	while (j < words)
	{
		if (s[i] != c)
		{
			res[j++] = ft_minisplit(s, c, &i);
			if (res[j - 1] == NULL)
				return (ft_die(res));
		}
		else
			i++;
	}
	return (res);
}
