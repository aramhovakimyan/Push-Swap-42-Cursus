/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:22:39 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 13:51:53 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;

	if (size == SIZE_MAX || num == SIZE_MAX)
	{
		return (0);
	}
	res = malloc(num * size);
	if (!res)
		return (0);
	ft_bzero(res, num * size);
	return (res);
}
