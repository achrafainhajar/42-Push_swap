/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:48:39 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 23:38:07 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*str;

	if (check(argc, argv) != 0)
	{
		ft_putstr("Error\n", 1);
		return (0);
	}
	if (argc == 1)
		exit(0);
	stacka = norm22(argc, argv);
	if (checkrep(&stacka) != 0)
		exit(0);
	str = get_next_line(0);
	norm_bonus(&stacka, &stackb, str);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	if_checker(t_list **stacka, t_list **stackb, char *str)
{
	if (ft_strcmp(str, "pb\n") == 0)
		pb(stacka, stackb, 0);
	else if (ft_strcmp(str, "pa\n") == 0)
		pa(stacka, stackb, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(stacka, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(stackb, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(stacka, stackb, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(stacka, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(stackb, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(stacka, stackb, 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		sa(stacka, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(stackb, 0);
	else
	{
		ft_putstr("Error\n", 1);
		exit(0);
	}
}

void	norm_bonus(t_list **stacka, t_list **stackb, char *str)
{
	while (str)
	{
		if_checker(stacka, stackb, str);
		str = get_next_line(0);
	}
	if (check_sort(*stacka) == 1 && *stackb == NULL)
		ft_putstr("OK\n", 1);
	else
		ft_putstr("KO\n", 1);
}
