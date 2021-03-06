/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_white_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:11:25 by thou              #+#    #+#             */
/*   Updated: 2017/02/12 13:33:25 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	atoi_white_test(void)
{
	char	*str;

	str = "\t\v\f\r\n \f- \f\t\n\r    666666";
	if (ft_atoi(str) == atoi(str))
		return (0);
	return (-1);
}
