/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:54:10 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 15:38:56 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*s;

	if (!str)
		return (0);
	s = (char *)str;
	while (*s != (char)ch)
	{
		if (!*s)
			return (0);
		++s;
	}
	return (s);
}
