/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:13:22 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/10 23:39:59 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include "push_swap.h"

void	norm3(t_list **stacka, t_list **stackb, char *str);
void	if_checker(t_list **stacka, t_list **stackb, char *str);
void	norm_bonus(t_list **stacka, t_list **stackb, char *str);
#endif