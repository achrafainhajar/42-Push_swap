/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:13:47 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 22:28:52 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list *head, int min)
{
	while (head)
	{
		if (head->content < min)
			min = head->content;
		head = head->next;
	}
	return (min);
}

int	check_sort(t_list *head)
{
	if (head != NULL)
	{
		while (head->next)
		{
			if (head->content > head->next->content)
				return (0);
			head = head->next;
		}
	}
	else
		return (0);
	return (1);
}

int	get_num(t_list *head, int b)
{
	int	i;
	int	j;
	int	k;
	int	s;
	int	l;

	l = 0;
	k = get_size(head);
	i = 0;
	while (head)
	{
		if (head->content <= b)
		{
			s = head->content;
			break ;
		}
		i++;
		head = head->next;
	}
	j = get_norm(head, b, l);
	if (k - i > k - j)
		return (s);
	return (l);
}

int	get_norm(t_list *head, int b, int s)
{
	int	j;

	j = 0;
	while (head)
	{
		if (head->content <= b)
		{
			s = head->content;
			j = 0;
		}
			j++;
		head = head->next;
	}
	return (j);
}

void	sort_anorm(t_list **stacka, t_list **stackb, int j)
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
}
