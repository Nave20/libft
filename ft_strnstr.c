/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:45:09 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 17:45:09 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *tofind, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!tofind[0])
		return ((char *)src);
	if (size == 0)
		return (NULL);
	j = ft_strlen((char *) tofind);
	while (src[i] && i < size)
	{
		if (i + j > size)
			return (NULL);
		if (ft_strncmp((char *)src + i, tofind, j) == 0)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
