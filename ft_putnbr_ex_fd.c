/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ex_fd                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_unllen(unsigned long n);

int	ft_putnbr_ex_fd(unsigned long n, char *base, int fd)
{   	
	if (fd > 0)
	{
		if (n / 16)
			ft_putnbr_ex_fd((n / 16), base, fd);
		ft_putchar_fd(base[(n % 16)], fd);
	}
	return (ft_unllen(n));
}

static int	ft_unllen(unsigned long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (size++);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}
