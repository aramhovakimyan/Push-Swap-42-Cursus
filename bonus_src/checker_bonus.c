/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:45:45 by ahovakim          #+#    #+#             */
/*   Updated: 2023/05/04 14:45:46 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void	check(t_stack **a, int ac, char **av)
{
	if (is_no_arg(ac, av))
		exit(0);
	is_correct(ac, av);
	sign_between_nbr(ac, av);
	*a = get_args(*a, ac, av);
	if (is_duplicate(*a))
		error_mss();
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*curr_instr;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	check(&a, ac, av);
	while (1)
	{
		curr_instr = get_next_line(0);
		if (curr_instr)
			check_instruction(curr_instr, &a, &b);
		else
			break ;
		free(curr_instr);
	}
	if (!a || b || !is_sorted(a))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd ("OK\n", 1);
	return (0);
}
