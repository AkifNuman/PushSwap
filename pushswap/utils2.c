/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaltine <akifnuman@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:52:34 by akaltine          #+#    #+#             */
/*   Updated: 2024/01/15 06:52:38 by akaltine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

void	free_data(char **data)
{
	int	i;

	i = -1;
	while (data[++i])
		free(data[i]);
	free(data);
}

int	av_control(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_strcmp(av[i], "") == 0)
			return (1);
		i++;
	}
	return (0);
}
