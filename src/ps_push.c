/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:47:30 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 14:47:30 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	push(t_stack **dst, t_stack **src)
{
	t_stack	*h;
	t_stack	*tmp;

	if (!src || !(*src))
		return (0);
	tmp = (*src)->next;
	h = *src;
	if (tmp)
		tmp->prev = NULL;
	if (*dst)
		(*dst)->prev = h;
	h->next = *dst;
	*dst = h;
	*src = tmp;
	return (1);
}

void	pa(t_stack **a, t_stack **b)
{
	if (push(a, b))
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	if (push(b, a))
		ft_putstr_fd("pb\n", 1);
}
