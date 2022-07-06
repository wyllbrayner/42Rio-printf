/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pt_fd                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_pt_fd(void *ptr, int fd)
{
	unsigned int	n_long;
	if (fd > 0)
	{
		n_long = (unsigned int)ptr;
		ft_putstr_fd("0x", 1);
		ft_putnbr_ex_fd(n_long, "0123456789abcdef", fd);
	}
}
