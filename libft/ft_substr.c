/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:56:41 by jserpa-p          #+#    #+#             */
/*   Updated: 2021/04/20 12:33:01 by jserpa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len == 0)
		return (0);
	if (s_len <= start)
	{
		new_str = ft_calloc(1, sizeof(char));
		if (!(new_str))
			return (0);
		*new_str = 0;
		return (new_str);
	}
	if (s_len < len)
		len = s_len;
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!(new_str))
		return (0);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}
