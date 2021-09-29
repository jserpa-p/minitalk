/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:07:00 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/20 10:20:48 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;
	int	length;

	number = 0;
	sign = 1;
	length = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		if (++length > 10 && sign == -1)
			return (0);
		else if (length > 10 && sign == 1)
			return (-1);
		number *= 10;
		number += (int)(*str - '0');
		str++;
	}
	return (sign * number);
}
