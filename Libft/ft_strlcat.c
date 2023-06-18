/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:56:13 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 14:12:27 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_s;
	size_t	s_s;
	size_t	i;
	size_t	k;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	d_s = ft_strlen(dst);
	s_s = ft_strlen(src);
	if (dstsize == 0 || dstsize <= d_s)
		return (dstsize + s_s);
	k = d_s;
	while (src[i] && i < dstsize - d_s - 1)
	{
		dst[k] = src[i];
		++k;
		++i;
	}
	dst[k] = '\0';
	return (d_s + s_s);
}
