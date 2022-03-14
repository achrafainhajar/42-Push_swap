/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:38:26 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 22:22:06 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stacka, int i)
{
	t_list	*temp;
	t_list	*head;

	if (*stacka != NULL && (*stacka)->next != NULL)
	{
		head = *stacka;
		temp = *stacka;
		while (head->next->next)
		{
			head = head->next;
			temp = temp->next;
		}
		temp = temp->next;
		head->next = NULL;
		temp->next = *stacka;
		*stacka = temp;
	}
	ft_putstr("rra\n", i);
}

void	rrb(t_list	**stackb, int i)
{
	t_list	*temp;
	t_list	*head;

	if (*stackb != NULL && (*stackb)->next != NULL)
	{
		head = *stackb;
		temp = *stackb;
		while (head->next->next)
		{
			head = head->next;
			temp = temp->next;
		}
		temp = temp->next;
		head->next = NULL;
		temp->next = *stackb;
		*stackb = temp;
	}
	ft_putstr("rrb\n", i);
}

void	rrr(t_list **stacka, t_list **stackb, int i)
{
	rra(stacka, 0);
	rrb(stackb, 0);
	ft_putstr("rrr", i);
}
