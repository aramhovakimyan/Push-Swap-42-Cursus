/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:22:23 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:22:31 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *destination, size_t n)
{
	char	*result;
	size_t	i;

	result = (char *)destination;
	i = 0;
	while (i < n)
	{
		result[i++] = 0;
	}
}
