/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:02:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/07/05 12:02:60 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"

static int ft_check_type(const char *type, va_list vlr);

int	ft_printf(const char *frase, ...)
{
	printf("Entrou na ft_printf\n");
	va_list vlr;
	size_t	i;
	int		len;

	va_start(vlr, frase);
	i = 0;
	while (frase[i])
	{
		printf("\nvalor de i: %zu | valor de frase[i]: %c | len: %d\n", i, frase[i], len);
		if (frase[i] == '%' && !(ft_strnstr("cspdiuxX%", &frase[i + 1], 9)))
		{	
			len += ft_check_type(&frase[i + 1], vlr);
			i++;
		}
		else
		{
			ft_putchar_fd(frase[i], 1);
//			printf("valor de frase[i] no else: %c\n", frase[i]);
		}
		i++;
		len++;
	}
	va_end(vlr);
	ft_putnbr_fd(len, 1);
	return (0);
}

static int	ft_check_type(const char *type, va_list vlr)
{
	if (*type == 'c')
	{
		ft_putchar_fd(va_arg(vlr, int), 1);
		return (1);
	}
	else if (*type == 's')
		return (ft_management_str(va_arg(vlr, char *), 1));
	else if (*type == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}

	else if (*type == 'p')
	{
		ft_putnbr_pt_fd(va_arg(vlr, void *), 1);
	}
	else if ((*type == 'd') || (*type == 'i'))
	{
		ft_putnbr_fd(va_arg(vlr, int), 1);
	}
	else if (*type == 'u')
	{
		ft_putnbr_un_fd(va_arg(vlr, unsigned long), 1);
	}
	else if (*type == 'x') 
		return (ft_putnbr_ex_fd(va_arg(vlr, unsigned long), "0123456789abcdef", 1));
	else if	(*type == 'X')
		return (ft_putnbr_ex_fd(va_arg(vlr, unsigned long), "0123456789ABCDEF", 1));
	return (0);
}
