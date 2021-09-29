/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:55:44 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/21 15:13:53 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int		l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		l++;
	}
	while (n > 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = get_len(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
