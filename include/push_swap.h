/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:26:49 by mataman           #+#    #+#             */
/*   Updated: 2023/08/05 18:12:48 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>

typedef struct mystacks {
	int		*a;
	int		*b;
	size_t	asize;
	size_t	bsize;
}	t_mystack;

void	reverse_a(t_mystack *mystacks);
void	swap_a(t_mystack *mystacks);
void	swap_b(t_mystack *mystacks);
void	push_a(t_mystack *mystacks);
void	push_b(t_mystack *mystacks);
int		*indexing(t_mystack *arrr);
void	mradix(t_mystack *data);
int		ft_is_one(t_mystack *data, int j);
int		ft_iszero(t_mystack *data, int j);
int		ft_issorted(int *stack, int size);
void	sort_five(t_mystack *data);
void	sort_four(t_mystack *data);
void	sort_three(t_mystack *data);
char	*merget(int gc, char **gv);
int		whitespace(char *str);

#endif