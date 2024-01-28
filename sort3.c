/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:40:15 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/08 22:19:44 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort3(t_list	**stacka)
{
	t_list	*head;
	int		*b;
	int		i;

	b = malloc(sizeof(int) * 3);
	head = *stacka;
	i = 0;
	while (i <= 2)
	{
		b[i] = head->content;
		head = head->next;
		i++;
	}
	cases(b, &(*stacka));
	free(b);
}

void	cases(int *b, t_list	**stacka)
{
	if (b[0] > b[1] && b[0] < b[2] && b[1] < b[2])
	{
		sa(stacka, 1);
		return ;
	}
	else if (b[0] > b[1] && b[0] > b[2] && b[1] > b[2])
	{
		sa(stacka, 1);
		rra(stacka, 1);
		return ;
	}
	else if (b[0] > b[1] && b[0] > b[2] && b[1] < b[2])
	{
		ra(stacka, 1);
	}
	else if (b[0] < b[1] && b[0] < b[2] && b[1] > b[2])
	{
		sa(stacka, 1);
		ra(stacka, 1);
	}
	else if (b[0] < b[1] && b[0] > b[2] && b[1] > b[2])
		rra(stacka, 1);
}

int	findsmall(t_list *stack, int num, int	*b)
{
	t_list	*head;
	int		i;
	int		j;
	int		smallest;

	head = stack;
	j = 0;
	i = 0;
	while (i <= num)
	{
		b[i++] = head->content;
		head = head->next;
	}
	smallest = b[0];
	i = 0;
	while (i <= num)
	{
		if (b[i] < smallest)
		{
			smallest = b[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	sort4(t_list **stacka, t_list **stackb)
{
	int	i;
	int	*b;
	int	j;

	b = malloc(sizeof(int) * 4);
	j = findsmall(*stacka, 3, b);
	i = 0;
	if (j == 3)
		rra(&(*stacka), 1);
	else if (j == 1)
		ra(&(*stacka), 1);
	else if (j == 2)
	{
		ra(&(*stacka), 1);
		ra(&(*stacka), 1);
	}
	pb(&(*stacka), &(*stackb), 1);
	sort3(&(*stacka));
	pa(&(*stacka), &(*stackb), 1);
	free(b);
}

void	sort5(t_list **stacka, t_list **stackb)
{
	int	i;
	int	*b;
	int	j;

	b = malloc(sizeof(int) * 5);
	j = findsmall(*stacka, 4, b);
	i = 0;
	if (j > 2)
	{
		while (j++ < 5)
			rra(&(*stacka), 1);
	}
	else
	{
		while (j > 0)
		{
			ra(&(*stacka), 1);
			j--;
		}
	}
	pb(&(*stacka), &(*stackb), 1);
	sort4(&(*stacka), &(*stackb));
	pa(&(*stacka), &(*stackb), 1);
	free(b);
}
