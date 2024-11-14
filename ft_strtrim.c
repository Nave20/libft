/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:30:25 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/13 15:30:25 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				j = 0;
				i++;
			}
			else
				j++;
		}
		return (i);
	}
	return (0);
}

size_t	ft_revcount(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	while (i != 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				j = 0;
				i--;
			}
			else
				j++;
		}
		return (ft_strlen(s1) - i - 1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	len;
	size_t	start;

	res = (char *) s1;
	start = ft_count(s1, set);
	len = ft_strlen(&res[start]);
	res = ft_substr(res, start, len - ft_revcount(s1, set));
	return (res);
}
