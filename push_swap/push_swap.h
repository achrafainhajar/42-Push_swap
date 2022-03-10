/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:59:35 by aainhaja          #+#    #+#             */
/*   Updated: 2022/03/09 22:45:58 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<string.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;
int		checknum(char **str);
int		check(int argc, char **argv);
int		checkrep(t_list **stacka);
void	cases(int *b, t_list	**stacka);
void	sa(t_list	**stacka, int i);
void	pa(t_list **stacka, t_list **stackb, int i);
void	pb(t_list **stacka, t_list **stackb, int i);
void	ra(t_list **stacka, int i);
void	rb(t_list **stackb, int i);
void	rr(t_list **stacka, t_list **stackb, int i);
void	rra(t_list **stacka, int i);
void	rrb(t_list **stackb, int i);
void	rrr(t_list **stacka, t_list **stackb, int i);
int		findsmall(t_list *stack, int num, int *b);
void	sort4(t_list **stacka, t_list **stackb);
void	sort3(t_list	**stacka);
void	sort5(t_list **stacka, t_list **stackb);
int		*get_chunks(t_list *stacka, float i, int s);
int		*get_values(t_list	*stack_k, float i, int s);
void	sort_k(t_list *stack_k);
float	get_size(t_list *stack_k);
void	sort_100(t_list **stacka, t_list **stackb, float l);
void	sort_a(t_list **stacka, t_list **stackb);
int		get_index(t_list *head, int num);
int		get_min(t_list *head, int min);
void	sort_b(t_list **stacka, t_list **stackb);
int		get_max(t_list *head, int max);
void	ft_putstr(char *s, int l);
int		check_sort(t_list *head);
void	sort_500(t_list **stacka, t_list **stackb, float l);
int		get_num(t_list *head, int b);
void	sort_norm(t_list **stacka, t_list	**stackb, int b, t_list	*head);
void	sort_norm(t_list **stacka, t_list	**stackb, int b, t_list	*head);
int		ft_abs(float num);
void	ifcases(t_list **stacka, t_list **stackb, float size);
int		get_norm(t_list *head, int b, int s);
void	sort_anorm(t_list **stacka, t_list **stackb, int j);
void	ft_lstclear(t_list	**lst);
int		ft_atoi(const char	*str);
void	if_checker(t_list **stacka, t_list **stackb, char *str);
void	norm_bonus(t_list **stacka, t_list **stackb, char *str);
int		get_size2(char **argv, int argc);
char	**ft_split(char const *s, char c);
char	**ft_splitcpy(const char *s, char c, char **str, int alloc);
char	**ft_charcount(const char *s, char c, char **str, int alloc);
void	*norm22(int argc, char **argv);
#endif