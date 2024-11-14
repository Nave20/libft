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

int	ft_countword(char const *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] == c)
			i++;
		else if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_minisplit(char const *s, char c, char **res)
{
	size_t	i;
	size_t	start;
	int		count;

	start = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			res[count] = (char *) malloc ((i + 1 - start) * sizeof(char));
			ft_strlcpy(res[count], &s[start], (i + 1) - start);
			i++;
			count++;
			start = i;
		}
		else
			i++;
	}
	res[count] = (char *) malloc ((i + 1 - start) * sizeof(char));
	ft_strlcpy(res[count], &s[start], (i + 1) - start);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		count;
	char	**res;

	i = 0;
	count = ft_countword(s, c);
	if (count == 0)
		return (NULL);
	res = (char **) malloc (count * sizeof(char *));
	res = ft_minisplit(s, c, res);
	return (res);
}

#include <stdio.h>
int main(void)
{
	char	*test = "   ";
	char	**res;
	int		i;
	size_t len;

	i = 0;
	printf("lu\n", ft_word(test, ' ', &len));
	// res = ft_split(test, ' ');
	// while (i < 5)
	// {
	// 	printf("%s\n", res[i]);
	// 	i++;
	// }
	// i = 0;
	// while (i < 5)
	// {
	// 	free(res[i]);
	// 	i++;
	// }
	// free(res);
	return 0;
}