/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:25:39 by mataman           #+#    #+#             */
/*   Updated: 2023/08/05 18:15:12 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	*indexing(t_mystack *arrr)
{
	int	*tmp;
	int	i;
	int	j;

	tmp = ft_calloc(arrr->asize, sizeof(int));
	i = -1;
	while (++i < arrr->asize)
		tmp[i] = arrr->a[i];
	sort(tmp, arrr->asize);
	i = 0;
	while (i < arrr->asize)
	{
		j = -1;
		while (++j < arrr->asize)
		{
			if (tmp[j] == arrr->a[i])
			{
				arrr->a[i] = j;
				break ;
			}
		}
		i++;
	}
	free(tmp);
	return (0);
}
