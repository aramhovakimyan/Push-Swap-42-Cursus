/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:54:18 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:54:38 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dpl;
	int		len;
	int		i;

	len = ft_strlen(str);
	dpl = (char *)malloc((len + 1) * sizeof(char));
	if (!dpl)
		return (0);
	i = 0;
	while (str[i])
	{
		dpl[i] = str[i];
		++i;
	}
	dpl[i] = '\0';
	return (dpl);
}
