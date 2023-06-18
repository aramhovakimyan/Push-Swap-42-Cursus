/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:58:49 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 15:38:41 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	char	*last;

	if (!str)
		return (0);
	s = (char *)str;
	last = NULL;
	if ((char)ch == '\0')
		return (s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)ch)
			last = s;
		++s;
	}
	return (last);
}
