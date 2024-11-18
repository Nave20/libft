/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:40:37 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 11:40:37 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) mem;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
}