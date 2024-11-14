/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:54:32 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 11:54:32 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char			*ptrdest;
	char			*ptrsrc;
	long long int	index;

	index = 0;
	if (!dest && !src)
		return (NULL);
	ptrdest = dest;
	ptrsrc = (char *) src;
	while (size)
	{
		ptrdest[index] = ptrsrc[index];
		index++;
		size--;
	}
	return (dest);
}
