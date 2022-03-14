/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:28:45 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 22:24:44 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **stacka, t_list **stackb, int i)
{
	t_list	*temp;
	t_list	*head;

	if (*stacka != NULL)
	{
		temp = *stacka;
		head = malloc(sizeof(t_list));
		head->next = NULL;
		head->content = (*stacka)->content;
		head->next = *stackb;
		(*stackb) = head;
		(*stacka) = (*stacka)->next;
		free(temp);
		temp = NULL;
	}
	ft_putstr("pb\n", i);
}

void	pa(t_list **stacka, t_list **stackb, int i)
{
	t_list	*head;
	t_list	*temp;

	if (*stackb != NULL)
	{
		temp = *stackb;
		head = malloc(sizeof(t_list));
		head->next = NULL;
		head->content = (*stackb)->content;
		head->next = *stacka;
		(*stacka) = head;
		(*stackb) = (*stackb)->next;
		free(temp);
		temp = NULL;
	}
	ft_putstr("pa\n", i);
}
