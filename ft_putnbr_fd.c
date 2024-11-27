/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:08:36 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/20 14:08:36 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_putnbr_fd(long long int n, int fd)
{
	char	a;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		return ((int) write(fd, "-2147483648", 11));
	}
	if (n < 0)
	{
		count += (int) write(fd, "-", 1);
		n *= -1;
	}
	if (n <= 9)
	{
		a = n + 48;
		count += (int) write(fd, &a, 1);
	}
	else
	{
		count += ft_putnbr_fd(n / 10, fd);
		count += ft_putnbr_fd(n % 10, fd);
	}
	return (count);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("\n%d",ft_putnbr_fd(4593, 1));
// }