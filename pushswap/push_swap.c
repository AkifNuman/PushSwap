/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaltine <akifnuman@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:51:24 by akaltine          #+#    #+#             */
/*   Updated: 2024/01/15 06:52:02 by akaltine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_push_swap(char **av, t_free *fre)
{
	t_stack			stack;
	int				size;
	int				i;

	i = -1;
	size = ft_ps_strlen(av);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
		ft_error (&stack, av, fre);
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(av[i], &stack, av, fre);
	ft_check_repeat(size, &stack, av, fre);
	ft_sort(&stack, size);
	free (stack.a);
	free (stack.b);
}

int	main(int ac, char **av)
{
	t_free	freesplit;
	char	**data;

	data = NULL;
	freesplit.i = 0;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			freesplit.i = 1;
			data = ft_split(*av, ' ');
			if (data)
				ft_push_swap(data, &freesplit);
		}
		else
			ft_push_swap(av, &freesplit);
	}
	if (data)
		free_data (data);
}
