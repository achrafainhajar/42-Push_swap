/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:56:27 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/14 19:53:03 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_list **stacka, int i)
{
	t_list	*temp;
	int		a;

	if (*stacka != NULL && (*stacka)->next != NULL)
	{
		temp = *stacka;
		temp = temp->next;
		a = temp->content;
		temp->content = (*stacka)->content;
		(*stacka)->content = a;
	}
	ft_putstr("sa\n", i);
}

void	sb(t_list **stackb, int i)
{
	t_list	*temp;
	int		a;

	if (*stackb != NULL && (*stackb)->next != NULL)
	{
		temp = *stackb;
		temp = temp->next;
		a = temp->content;
		temp->content = (*stackb)->content;
		(*stackb)->content = a;
	}
	ft_putstr("sb\n", i);
}

void	ft_lstclear(t_list	**lst)
{
	t_list	*tab;
	t_list	*temp;

	tab = *lst;
	temp = tab;
	while (temp != NULL)
	{
		tab = tab->next;
		free(temp);
		temp = tab;
	}
	*lst = NULL;
}
