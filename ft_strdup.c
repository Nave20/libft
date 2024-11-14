/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:13:57 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/08 09:13:57 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;
	size_t	index;

	index = 0;
	res = (char *) malloc ((ft_strlen(src) + 1) * sizeof (char));
	if (res == NULL)
		return (NULL);
	while (src[index])
	{
		res[index] = src[index];
		index++;
	}
	res[index] = '\0';
	return (res);
}
