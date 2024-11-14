/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:56:53 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/13 14:56:53 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	len = ft_strlen(s2);
	j = ft_strlen(s1) + 1;
	i = 0;
	res = (char *) malloc ((j + len) * sizeof(char));
	if (!res)
		return (res);
	ft_strlcpy(res, s1, j);
	while (i < len)
	{
		res[j - 1] = s2[i];
		i++;
		j++;
	}
	res[j - 1] = '\0';
	return (res);
}
