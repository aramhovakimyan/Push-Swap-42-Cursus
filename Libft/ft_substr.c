/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:00:48 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 13:01:04 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	length;
	size_t	i;

	if (!s)
		return (0);
	length = ft_strlen(s);
	i = 0;
	if ((size_t)start >= length)
		return (ft_strdup(""));
	if (len > length - (size_t)start)
		len = length - start;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (s[i] && i < len)
	{
		res[i] = s[(size_t)start + i];
		++i;
	}
	res[i] = '\0';
	return (res);
}
