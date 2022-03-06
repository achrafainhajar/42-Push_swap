/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:48:53 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/06 23:11:04 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (str[i] == '-')
			i++;
		else if (str[i] > '9' || str[i] < '0')
			return (-1);
		else
			i++;
	}
	return (0);
}

int	checkrep(int argc, char **argv)
{
	int	i;
	int	j;

	(void) argc;
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (atoi(argv[i]) == atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check(int argc, char **argv)
{
	int	i;

	i = 1;
	if ((argc - 1) <= 1)
		return (-1);
	if (checkrep(argc, argv) != 0)
		return (-1);
	while (i < argc)
	{
		if (checknum(argv[i]) != 0)
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
	if (l == -1 && b >= 9223372036854775807)
		return (0);
	if (b >= 9223372036854775807)
		return (-1);
	return ((long)l * b);
}
