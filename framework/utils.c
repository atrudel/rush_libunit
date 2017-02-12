/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrudel <atrudel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 11:25:01 by atrudel           #+#    #+#             */
/*   Updated: 2017/02/12 19:10:41 by atrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	header(char *title)
{
	int i;

	i = -1;
	while (++i < 45)
		ft_putstr("*");
	ft_printf("\n\t\t%s\n", title);
	i = -1;
	while (++i < 45)
		ft_putstr("*");
	ft_putstr("\n\n");
}

void	tail(int failed_tests)
{
	int i;

	if (failed_tests == 0)
		ft_printf("%sAll functions are working correctly%s\n", GREEN, WHITE);
	else
		ft_printf("%s%d functions are working incorrectly%s\n", RED,
														-failed_tests, WHITE);
	i = -1;
	while (++i < 45)
		ft_putstr("*");
	ft_putstr("\n\n");
}

void	error_exit(char *message)
{
	ft_putendl_fd(message, 2);
	exit(-1);
}
