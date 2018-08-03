/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:27:25 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/03 14:36:26 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_putchar.c"
#include "ex00/ft_print_alphabet.c"
#include "ex01/ft_print_reverse_alphabet.c"
#include "ex02/ft_print_numbers.c"
#include "ex03/ft_is_negative.c"
#include "ex04/ft_print_comb.c"
#include "ex05/ft_print_comb2.c"
#include "ex06/ft_putnbr.c"

int		main(int argc, char *argv[])
{
	if (!strcmp(argv[1], "0"))
	{
		ft_print_alphabet();
	}
	else if (!strcmp(argv[1], "1"))
	{
		ft_print_reverse_alphabet();
	}
	else if (!strcmp(argv[1], "2"))
	{
		ft_print_numbers();	
	}
	else if (!strcmp(argv[1], "3"))
	{
		ft_is_negative(42);
		ft_putchar('\n');
		ft_is_negative(-42);
		ft_putchar('\n');
	}
	else if (!strcmp(argv[1], "4"))
	{
		ft_print_comb();
	}
	else if (!strcmp(argv[1], "5"))
	{
		ft_print_comb2();
	}
	else if (!strcmp(argv[1], "6"))
	{
		ft_putnbr(42);
		ft_putchar('\n');
		ft_putnbr(-42);
		ft_putchar('\n');
	}

	(void)argc;
	return (0);
}
