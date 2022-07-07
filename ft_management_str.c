/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_management_str                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_management_str(char *str, int fd)
{
	if (fd > 0)
	{
		if (!str)
		{
			ft_putstr_fd("(null)", fd);
			return (6);
		}
		else
		{
			ft_putstr_fd(str, fd);
			return ((int)ft_strlen(str));
		}
	}
	return (0);
}
