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
	ft_printf("Passando: string %s | string nula: %s | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned int: %u | HEX: %X | hex: %x | porcento sozinho: % | porcento porcento %%, mesmo apos o parametro\n", "Envio de string", NULL, 'W', &p, 42, 24, 4294967295, 429496, 429496);
	printf("\nVerificando o retorno da função original\n");
	//printf("Passando: string %s | string nula: %s | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned int: %ld | HEX: %X | hex: %x | porcento sozinho:   | porcento porcento %%, mesmo apos o parametro\n", "Envio de string", NULL, 'W', &p, 42, 24, 4294967295, 429496, 429496);
	printf("Passando: string %s | string nula: %p | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned int: %ld | HEX: %X | hex: %x | porcento sozinho:   | porcento porcento %%, mesmo apos o parametro\n", "Envio de string", NULL, 'W', &p, 42, 24, 4294967295, 429496, 429496);
	return (0);
}
