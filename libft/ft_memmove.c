/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:18:59 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/16 13:20:29 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
	{
		i = -1;
		while (++i < len)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	else if (src < dst)
	{
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	}
	return (dst);
}
