/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:27:20 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/23 17:27:28 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_base(const char *base)
{
	int	i;
	int	a;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		a = 0;
		while (a < i)
		{
			if (base[a] == base[i])
				return (0);
			a++;
		}
		i++;
	}
	return (1);
}

size_t	ft_base_res(unsigned long long int nbr, size_t base)
{
	size_t	res;

	res = 0;
	while (nbr > 0)
	{
		nbr /= base;
		res++;
	}
	return (res);
}

char	*ft_miniputnbr(unsigned long long int nbr, char *base, char *res)
{
	size_t	size;
	size_t	len;

	size = ft_strlen(base);
	len = ft_base_res(nbr, size);
	res[len--] = 0;
	while (nbr > 0)
	{
		res[len--] = base[nbr % size];
		nbr = nbr / size;
	}
	return (res);
}

int	ft_putnbr_base(unsigned long long int nbr, char *base)
{
	char	*res;
	int		out;

	if (nbr == 0)
		return ((int) write(1, "0", 1));
	res = ft_calloc(sizeof(char), 1000);
	if (check_base(base) == 0 || !res)
		return (-1);
	res = ft_miniputnbr(nbr, base, res);
	out = ft_putstr_fd(res, 1);
	free(res);
	return (out);
}
