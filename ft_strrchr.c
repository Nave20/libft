/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:20:44 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/06 15:20:44 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)s + ft_strlen((char *)s));
	if (i == 0)
		return (NULL);
	i -= 1;
	while (s[i] != (unsigned char)c && i)
		i--;
	if (i == 0 && s[0] != (unsigned char)c)
		return (NULL);
	return ((char *)s + i);
}
