/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:02:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/07/05 12:02:60 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char p;

	p = 'Z';
	printf("Rescrevendo o printf\n");
	ft_printf("Passando: string %s | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned int: %u | HEX: %X | hex: %x no mesmo apos o parametro", "Envio de string\n", 'W', &p, 42, 24, 4294967295, 429496, 429496);
	return (0);
}
