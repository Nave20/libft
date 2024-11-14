/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:36:02 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 17:36:02 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *) mem1)[i] != ((unsigned char *) mem2)[i])
			return (((unsigned char *)mem1)[i] - ((unsigned char *)mem2)[i]);
		i++;
	}
	return (0);
}
