/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:31:58 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 19:46:37 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_chunks(t_list *stacka, float i, int s)
{
	t_list	*head1;
	t_list	*head;
	t_list	*top;

	top = NULL;
	head1 = stacka;
	while (head1)
	{
		head = malloc(sizeof(t_list));
		head->next = NULL;
		head->content = head1->content;
		head->next = top;
		top = head;
		head1 = head1->next;
	}
	sort_k(top);
	return (get_values(top, i / s, s));
}

int	*get_values(t_list	*stack_k, float i, int s)
{
	int		*b;
	int		j;
	int		k;
	int		l;
	t_list	*head;

	head = stack_k;
	b = malloc(sizeof(int) * s);
	l = 1;
	k = 1;
	j = 0;
	while (stack_k && j != s)
	{
		if (ft_abs(i * l) == k)
		{
			b[j] = stack_k->content;
			j++;
			l++;
		}
		k++;
		stack_k = stack_k->next;
	}
	ft_lstclear(&head);
	return (b);
}

void	sort_k(t_list *stack_k)
{
	t_list	*head;
	t_list	*head2;
	int		i;

	head = stack_k;
	head2 = stack_k->next;
	while (head && head2)
	{
		if (head->content > head2->content)
		{
			i = head->content;
			head->content = head2->content;
			head2->content = i;
			head = stack_k;
			head2 = stack_k->next;
		}
		else
		{
			head = head->next;
			head2 = head2->next;
		}
	}
}

float	get_size(t_list *stack_k)
{
	float	i;

	i = 0;
	while (stack_k)
	{
		stack_k = stack_k->next;
		i++;
	}
	return (i);
}

int	ft_abs(float num)
{
	int		tmp;
	float	abs;

	tmp = num;
	abs = num - tmp;
	if (abs >= 0.5)
		return (num + 1);
	return (num);
}
