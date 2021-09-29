/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:41:37 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/16 13:34:42 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_pos = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last_pos);
}
