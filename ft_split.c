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

int	ft_countw(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] == c)
		{
			i++;
		}
		if (s[i - 1] == c && s[i] != c)
		{
			count++;
			i++;
		}
		else if (s[i] == c)
		{
			i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_minisplit(char **res, char const *s, char c)


char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = ft_countw(s, c);
	res = (char **) malloc (words * sizeof(char *));
	if (res == NULL || words == 0)
		return (NULL);

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
	printf("%d \n", ft_countw(test, ' '));
	return 0;
}