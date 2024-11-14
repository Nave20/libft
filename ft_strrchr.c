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
	while (s[i] != (unsigned char)c && i)
		i--;
	if (s[i] == 0 && (unsigned char)c != 0)
		return (NULL);
	if (s[i] == c)
		return (((char *)&s[i]));
	else
		return (NULL);
}
