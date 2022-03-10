/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:06:49 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 00:13:49 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_list **stacka, int i)
{
	t_list	*head;
	t_list	*temp;

	head = *stacka;
	temp = head;
	head = head->next;
	temp->next = NULL;
	*stacka = head;
	while (head->next)
	{
		head = head->next;
	}
	head->next = temp;
	ft_putstr("ra\n", i);
}

void	rb(t_list **stackb, int i)
{
	t_list	*head;
	t_list	*temp;

	head = *stackb;
	temp = head;
	head = head->next;
	temp->next = NULL;
	*stackb = head;
	while (head->next)
	{
		head = head->next;
	}
	head->next = temp;
	ft_putstr("rb\n", i);
}

void	rr(t_list **stacka, t_list **stackb, int i)
{
	ra(stacka, 0);
	rb(stackb, 0);
	ft_putstr("rr", i);
}

void	ft_putstr(char *s, int l)
{
	int	i;

	i = 0;
	if (s && l == 1)
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}
