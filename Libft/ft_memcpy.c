/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:48:49 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:48:50 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char		*result;
	const char	*src;
	size_t		i;

	result = (char *)destination;
	src = (char *)source;
	i = 0;
	if (result == src)
		return (result);
	while (i < n)
	{
		result[i] = src[i];
		++i;
	}
	return (result);
}
