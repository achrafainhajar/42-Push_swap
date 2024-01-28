/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:39:14 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 00:50:33 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_list **stacka, t_list **stackb, float l)
{
	int		*b;
	int		i;
	t_list	*head;

	i = 0;
	head = *stacka;
	b = get_chunks(*stacka, l, 12);
	while (i < 11)
	{
		head = *stacka;
		sort_norm(stacka, stackb, b[i], head);
		i++;
	}
	free(b);
	sort_a(stacka, stackb);
}

void	sort_norm(t_list **stacka, t_list	**stackb, int b, t_list	*head)
{
	int	j;

	j = 0;
	while (head)
	{
		if (head->content <= b)
		{
			if (j <= get_size(*stacka) / 2)
			{
				while (j-- > 0)
					ra(&*stacka, 1);
				pb(&*stacka, &*stackb, 1);
			}
			else
			{
				while (j++ < get_size(*stacka))
					rra(&*stacka, 1);
				pb(&*stacka, &*stackb, 1);
			}
			head = *stacka;
		}
		else
			head = head->next;
		j++;
	}
}
