/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:48:53 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 21:57:05 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(char **str)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == ' ' && str[i][j + 1] != 0)
				j++;
			else if ((str[i][j] == '-' || str[i][j] == '+')
						&& str[i][j + 1] >= '0'
							&& str[i][j + 1] <= '9')
				j++;
			else if ((str[i][j] > '9' || str[i][j] < '0') && str[i][j] != 32)
				return (-1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	checkrep(t_list **stacka)
{
	t_list	*head;
	t_list	*top;

	head = *stacka;
	top = head->next;
	while (head->next)
	{
		top = head->next;
		while (top)
		{
			if (head->content == top->content)
			{
				ft_putstr("Error\n", 1);
				return (-1);
			}
			top = top->next;
		}
		head = head->next;
	}
	return (0);
}

int	check(int argc, char **argv)
{
	int	i;

	i = 1;
	(void)(argc);
	if (checknum(argv) != 0)
		return (-1);
	while (argv[i])
	{
		if (argv[i][0] == '\0' || argv[i] == NULL)
			return (-1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char	*str)
{
	unsigned long long	i;
	unsigned long long	b;
	long				l;

	l = 1;
	i = 0;
	b = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			l = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		b = b * 10 + (str[i++] - '0');
	if ((l == -1 && b > 2147483648) || (b > 2147483647 && l != -1))
	{
		ft_putstr("Error\n", 1);
		exit(0);
	}
	return ((long)l * b);
}
