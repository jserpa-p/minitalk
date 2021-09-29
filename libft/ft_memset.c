/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:19:12 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/16 13:20:50 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *in, int data, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)in;
	while (len-- > 0)
		*ptr++ = (unsigned char)data;
	return (in);
}
