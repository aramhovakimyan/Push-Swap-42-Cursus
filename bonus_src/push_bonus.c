/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:46:11 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 14:46:11 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*h;
	t_stack	*tmp;

	if (!src || !(*src))
		return ;
	tmp = (*src)->next;
	h = *src;
	if (tmp)
		tmp->prev = NULL;
	if (*dst)
		(*dst)->prev = h;
	h->next = *dst;
	*dst = h;
	*src = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
}
