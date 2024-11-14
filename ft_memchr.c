/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:27:52 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 17:27:52 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t size)
{
	char	*ptr;
	size_t	index;

	index = 0;
	ptr = (char *) mem;
	while (index < size)
	{
		if (ptr[index] == c)
			return (&ptr[index]);
		index++;
	}
	return (0);
}
