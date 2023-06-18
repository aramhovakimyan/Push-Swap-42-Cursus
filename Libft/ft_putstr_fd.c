/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:53:50 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/23 12:53:51 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	l;
	size_t	i;

	if (!s)
		return ;
	i = 0;
	l = ft_strlen(s);
	while (i < l)
	{
		write(fd, &s[i++], 1);
	}
}
