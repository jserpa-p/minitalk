/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:18:20 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/16 13:19:51 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*copybuffer;

	if (!src && !dst)
		return (NULL);
	copybuffer = (char *)dst;
	while (n--)
	{
		*copybuffer++ = *(char *)(src++);
	}
	return (dst);
}
