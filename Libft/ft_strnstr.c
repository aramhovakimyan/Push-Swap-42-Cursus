/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:58:10 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:58:28 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (!*l)
		return (b);
	while (len > i && b[i])
	{
		j = 0;
		while (b[i + j] == l[j] && len > (i + j))
		{
			j++;
			if (!l[j])
				return (b + i);
		}
		++i;
	}
	return (NULL);
}
