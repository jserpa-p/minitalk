/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:41:20 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/20 12:28:24 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (*(char *)big && (int)(len - little_len) != -1)
	{
		if (!ft_strncmp((char *)big, (char *)little, little_len))
			return ((char *)big);
		len--;
		big++;
	}
	return (0);
}
