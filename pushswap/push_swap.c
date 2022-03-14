/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:35:16 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 23:47:37 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char	**argv)
{
	t_list	*stacka;
	t_list	*stackb;

	if (check(argc, argv) != 0)
	{
		ft_putstr("Error\n", 1);
		return (0);
	}
	stacka = norm22(argc, argv);
	if (check_sort(stacka) != 0)
		return (0);
	if (checkrep(&stacka) != 0)
		exit(0);
	ifcases(&stacka, &stackb, get_size(stacka));
	return (0);
}

void	ifcases(t_list **stacka, t_list	**stackb, float size)
{
	if (size == 2)
	{
		if ((*stacka)->content > (*stacka)->next->content)
			sa(stacka, 1);
	}
	else if (size == 3)
		sort3(stacka);
	else if (size == 4)
		sort4(stacka, stackb);
	else if (size == 5)
		sort5(stacka, stackb);
	else if (size <= 100)
		sort_100(stacka, stackb, size);
	else if (size <= 500)
		sort_500(stacka, stackb, size);
}
