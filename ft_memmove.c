/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:39:47 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 12:39:47 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	index;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		index = size;
		while (index-- > 0)
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
	}
	else
	{
		index = 0;
		while (index < size)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dest);
}
