/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:04:40 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 13:04:40 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizedest;
	size_t	sizesrc;
	size_t	isrc;
	size_t	idest;

	isrc = 0;
	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	idest = sizedest;
	if (!dest || size == 0)
		return (sizesrc);
	while (idest < size -1 && src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	if (size < (idest))
		return (sizesrc + size);
	return (sizedest + sizesrc);
}
