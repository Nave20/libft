/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:44:49 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/13 13:44:49 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i != start && s[i])
		i++;
	if (len > ft_strlen(s) - i)
		len = ft_strlen(s) - i;
	res = (char *) malloc ((len + 1) * sizeof (char));
	if (!res)
		return (res);
	while (j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *test = "bonjour j adore le monde";
//
// 	printf("%s \n", ft_substr(test, 1, 5));
// 	return 0;
// }