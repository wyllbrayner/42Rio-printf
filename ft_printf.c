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

static int ft_check_type(const char *type, va_list parametros);

int	ft_printf(const char *frase, ...)
{
	printf("Entrou na ft_printf\n");
	va_list parametros;
	size_t	i;

	va_start(parametros, frase);
	i = 0;
	while (frase[i])
	{
		printf("valor de i: %zu | valor de frase[i]: %c\n", i, frase[i]);
		if (frase[i] == '%' && !(ft_strnstr("cspdiuxX%", &frase[i + 1], 9)))
		{	
			ft_check_type(&frase[i + 1], parametros);
			i++;
		}
		else
		{
			printf("valor de frase[i] no else: %c\n", frase[i]);
		}
		i++;
	}
	va_end(parametros);
	return (0);
}

static int	ft_check_type(const char *type, va_list parametros)
{
	if (*type == 'c')
	{
		ft_putchar_fd(va_arg(parametros, int), 1);
	}
	else if (*type == 's')
	{
		ft_putstr_fd(va_arg(parametros, char *), 1);
	}
	else if (*type == 'p')
	{
		ft_putnbr_pt_fd(va_arg(parametros, void *), 1);
	}
	else if ((*type == 'd') || (*type == 'i'))
	{
		ft_putnbr_fd(va_arg(parametros, int), 1);
	}
	else if (*type == 'u')
	{
		ft_putnbr_un_fd(va_arg(parametros, unsigned int), 1);
	}
	else if (*type == 'X') 
	{
		ft_putnbr_ex_fd(va_arg(parametros, unsigned int), "0123456789ABCDEF", 1);
	}
	else if	(*type == 'x')
	{
		ft_putnbr_ex_fd(va_arg(parametros, unsigned int), "0123456789abcdef", 1);
	}
	return (0);
}
