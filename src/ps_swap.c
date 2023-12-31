/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:47:47 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 14:47:47 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	swap(t_stack **elem)
{
	int	tmp;

	if (!elem || !*elem || !(*elem)->next)
		return (0);
	tmp = (*elem)->data;
	(*elem)->data = (*elem)->next->data;
	(*elem)->next->data = tmp;
	tmp = (*elem)->index;
	(*elem)->index = (*elem)->next->index;
	(*elem)->next->index = tmp;
	return (1);
}

void	sa(t_stack **a)
{
	if (swap(a))
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b)
{
	if (swap(b))
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	if (swap(a) && swap(b))
		ft_putstr_fd("ss\n", 1);
}
