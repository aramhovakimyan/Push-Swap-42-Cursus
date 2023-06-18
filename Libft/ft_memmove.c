/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:49:23 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:51:06 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*result;
	unsigned char	*src;

	result = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (src < result)
		while (n--)
			result[n] = src[n];
	else
		ft_memcpy(destination, source, n);
	return (result);
}
