/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:26:44 by mataman           #+#    #+#             */
/*   Updated: 2023/08/05 18:13:12 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_one(t_mystack *data, int j)
{
	int	i;

	i = 0;
	while (i < data->asize)
	{
		if (((data->a[i] >> j) & 1) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_iszero(t_mystack *data, int j)
{
	int	i;

	i = 0;
	while (i < data->asize)
	{
		if (((data->a[i] >> j) & 1) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_issorted(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i] > stack[i + 1] && i != size - 1)
			return (0);
		i++;
	}
	return (1);
}

int	whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
			i++;
		else
			return (0);
	}
	return (1);
}
