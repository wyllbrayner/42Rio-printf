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

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int len;
	char p;
/*
*/
	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: string %s | string nula: %s | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned: %u | HEX: %X | hex: %x | porcento porcento %% | porcento sozinho: % apos os parametros.\n", "Envio de string", NULL, 'W', &p, 42, 21, 4294967295, 429496, 429496);
	printf("Valor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len = ft_printf("Passando: string %s | string nula: %p | caract: %c | ponteiro: %p | int: %i | digit: %d | unsigned: %u | HEX: %X | hex: %x | porcento porcento %% | porcento sozinho:  apos os parametros.\n", "Envio de string", NULL, 'W', &p, 42, 21, 4294967295, 429496, 429496);
	printf("Valor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: string %s", "Envio de string");
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: string %s", "Envio de string");
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: string nula %s", NULL);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: string nula %p", NULL);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: caracter %c", 'W');
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: caracter %c", 'W');
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: ponteiro %p", &p);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: ponteiro %p", &p);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: int %i", 42);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: int %i", 42);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: digit %d", 21);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: digit %d", 21);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: unsigned %u", 4294967295);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: unsigned %zu", 4294967295);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: HER %X", 429496);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: HEX %X", 429496);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: hex %x", 429496);
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: hex %x", 429496);
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: porcento porcento %%");
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: porcento porcento %%");
	printf("\nValor retornado pela    printf: %i\n", len);

	printf("\n============ Rescrevendo o printf ============\n");
	len = ft_printf("Passando: porcento sozinho: %");
	printf("\nValor retornado pela ft_printf: %i\n", len);

	printf("\nVerificando o retorno da função original\n");
	len =    printf("Passando: porcento sozinho: ");
	printf("\nValor retornado pela    printf: %i\n", len);



	return (0);
}
