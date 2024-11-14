/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:50:44 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 09:50:44 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) mem;
	while (i < size)
	{
		str[i] = (char) c;
		i++;
	}
	return (mem);
}
