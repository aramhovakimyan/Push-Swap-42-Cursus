/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:27:06 by ahovakim          #+#    #+#             */
/*   Updated: 2023/01/24 12:55:17 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long m)
{
	int	l;

	l = 0;
	if (m < 0)
	{
		l = 1;
		m = -m;
	}
	while (m > 0)
	{
		m /= 10;
		l++;
	}
	return (l);
}

static long	is_neg_m(char *s, long m)
{
	if (m < 0)
	{
		m = -m;
		s[0] = '-';
	}
	return (m);
}

static int	is_neg_helper(long m)
{
	if (m < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	m;
	int		i;
	int		l;

	if (!n)
		return (ft_strdup("0"));
	i = -1;
	m = (long)n;
	l = len(m);
	n = 0;
	res = (char *)malloc(l + 1);
	if (!res)
		return (0);
	n = is_neg_helper(m);
	m = is_neg_m(&res[0], m);
	while (++i < l - n)
	{
		res[l - i - 1] = m % 10 + '0';
		m /= 10;
	}
	res[l] = '\0';
	return (res);
}
