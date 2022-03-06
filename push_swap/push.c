/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:28:45 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/06 22:57:09 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **stacka, t_list **stackb, int i)
{
	t_list	*temp;
	t_list	*head;

	temp = *stacka;
	head = malloc(sizeof(t_list));
	head->next = NULL;
	head->content = (*stacka)->content;
	head->next = *stackb;
	(*stackb) = head;
	(*stacka) = (*stacka)->next;
	free(temp);
	temp = NULL;
	ft_putstr("pb\n", i);
}

void	pa(t_list **stacka, t_list **stackb, int i)
{
	t_list	*head;
	t_list	*temp;

	temp = *stackb;
	head = malloc(sizeof(t_list));
	head->next = NULL;
	head->content = (*stackb)->content;
	head->next = *stacka;
	(*stacka) = head;
	(*stackb) = (*stackb)->next;
	free(temp);
	temp = NULL;
	ft_putstr("pa\n", i);
}
