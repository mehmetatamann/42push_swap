/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:26:54 by mataman           #+#    #+#             */
/*   Updated: 2023/08/05 14:29:29 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_mystack *mystacks)
{
	int	i;

	mystacks->asize++;
	i = mystacks->asize - 1;
	while (i > 0)
	{
		mystacks->a[i] = mystacks->a[i - 1];
		i--;
	}
	mystacks->a[0] = mystacks->b[0];
	mystacks->bsize--;
	i = 0;
	while (i < mystacks->bsize)
	{
		mystacks->b[i] = mystacks->b[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}

void	push_b(t_mystack *mystacks)
{
	int	i;

	if (mystacks->asize > 0)
	{
		mystacks->bsize++;
		i = mystacks->bsize - 1;
		while (i > 0)
		{
			mystacks->b[i] = mystacks->b[i - 1];
			i--;
		}
		mystacks->b[0] = mystacks->a[0];
		mystacks->asize--;
		i = 0;
		while (i < mystacks->asize)
		{
			mystacks->a[i] = mystacks->a[i + 1];
			i++;
		}
		write(1, "pb\n", 3);
	}
}

void	reverse_a(t_mystack *mystacks)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = mystacks->a[0];
	while (i < (mystacks->asize - 1))
	{
		mystacks->a[i] = mystacks->a[i + 1];
		i++;
	}
	mystacks->a[i] = tmp;
	write(1, "ra\n", 3);
}

void	swap_a(t_mystack *mystacks)
{
	int	tmp;

	tmp = mystacks->a[0];
	mystacks->a[0] = mystacks->a[1];
	mystacks->a[1] = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_mystack *mystacks)
{
	int	tmp;

	tmp = mystacks->b[0];
	mystacks->b[0] = mystacks->b[1];
	mystacks->b[1] = tmp;
	write(1, "sb\n", 3);
}
