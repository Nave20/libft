/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:07:12 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/18 14:07:12 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*intmin(char *res)
{
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	res[11] = 0;
	return (res);
}

static int	ft_size(int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static char	*ft_filler(long int n, char *res, long int len)
{
	long int	temp;

	if (res[0] == '-')
		res[len + 1] = '\0';
	else
		res[len] = '\0';
	while (len)
	{
		temp = n % 10;
		n /= 10;
		if (res[0] == '-')
			res[len] = temp + 48;
		else
			res[len - 1] = temp + 48;
		len--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	long int	sign;
	long int	len;

	sign = 0;
	len = ft_size(n);
	if (n < 0)
	{
		sign += 1;
		n *= -1;
	}
	res = (char *) malloc ((len + sign + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (sign == 1)
	{
		res[0] = '-';
	}
	if (n == -2147483648)
		res = intmin(res);
	else
		ft_filler(n, res, len);
	return (res);
}
