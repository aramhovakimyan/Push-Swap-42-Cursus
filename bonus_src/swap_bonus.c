/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:46:24 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 14:46:24 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void	swap(t_stack **elem)
{
	int	tmp;

	if (!elem || !*elem || !(*elem)->next)
		return ;
	tmp = (*elem)->data;
	(*elem)->data = (*elem)->next->data;
	(*elem)->next->data = tmp;
	tmp = (*elem)->index;
	(*elem)->index = (*elem)->next->index;
	(*elem)->next->index = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
}

void	sb(t_stack **b)
{
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
