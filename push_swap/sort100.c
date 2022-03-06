/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:24:54 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/06 23:07:24 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_100(t_list **stacka, t_list **stackb, float l)
{
	int		*b;
	int		i;
	int		j;
	t_list	*head;

	i = 0;
	b = get_chunks(*stacka, l, 4);
	head = *stacka;
	while (i < 3)
	{
		j = 0;
		head = *stacka;
		sort_norm(stacka, stackb, b[i], head);
		i++;
	}
	free(b);
	sort_a(stacka, stackb);
}

void	sort_a(t_list **stacka, t_list **stackb)
{
	t_list	*head;
	int		min;
	int		j;

	j = 0;
	while ((*stacka)->next)
	{
		if (check_sort(*stacka) == 1)
			break ;
		head = *stacka;
		min = get_min(head, head->content);
		j = get_index(head, min);
		sort_anorm(stacka, stackb, j);
	}
	sort_b(stacka, stackb);
}

int	get_max(t_list *head, int max)
{
	while (head)
	{
		if (head->content > max)
			max = head->content;
		head = head->next;
	}
	return (max);
}

void	sort_b(t_list **stacka, t_list **stackb)
{
	t_list	*head;
	int		max;
	int		j;

	j = 0;
	while ((*stackb))
	{
		head = *stackb;
		max = head->content;
		max = get_max(head, max);
		j = get_index(head, max);
		if (j <= get_size(*stackb) / 2)
		{
			while (j-- > 0)
				rb(&*stackb, 1);
			pa(&*stacka, &*stackb, 1);
		}
		else
		{
			while (j++ < get_size(*stackb))
				rrb(&*stackb, 1);
			pa(&*stacka, &*stackb, 1);
		}
	}
}

int	get_index(t_list *head, int num)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->content == num)
			break ;
		head = head->next;
		i++;
	}
	return (i);
}
