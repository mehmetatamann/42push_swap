/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merget.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:26:37 by mataman           #+#    #+#             */
/*   Updated: 2023/08/05 18:13:36 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*merget(int gc, char **gv)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)ft_calloc(2, sizeof(*str));
	while (i < gc)
	{
		str = ft_strjoin(str, gv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}
