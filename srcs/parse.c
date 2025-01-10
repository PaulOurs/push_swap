/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 06:00:09 by paubello          #+#    #+#             */
/*   Updated: 2025/01/10 06:01:54 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*parse(char **argv, int argc)
{
	t_stack	*stack;
	int		i;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);

	stack->len = argc - 1;
	stack->stack = (int *)malloc(sizeof(int) * stack->len);
	if (!stack->stack)
		return (NULL);

	i = 0;
	while (i < stack->len)
	{
		stack->stack[i] = atoi(argv[i + 1]);
		i++;
	}

	// Additional error checking and validation can be added here

	return (stack);
}
