/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 08:11:15 by paubello          #+#    #+#             */
/*   Updated: 2025/01/11 08:29:54 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_min_max(t_stack *stack)
{
	int	i;

	stack->min = stack->stack[0];
	stack->max = stack->stack[0];
	i = 1;
	while (i < stack->len)
	{
		if (stack->stack[i] < stack->min)
			stack->min = stack->stack[i];
		if (stack->stack[i] > stack->max)
			stack->max = stack->stack[i];
		i++;
	}
}

int	calculate_operations(t_stack *stack_b, int number)
{
	int	i;
	int	operations;

	i = 0;
	operations = 0;
	while (i < stack_b->len)
	{
		if (stack_b->stack[i] < number)
			operations++;
		i++;
	}
	return (operations);
}

void	turk_algorithm(t_stack *stack_a, t_stack *stack_b)
{
	int	operations;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	while (stack_a->len > 0)
	{
		operations = calculate_operations(stack_b, stack_a->stack[0]);
		while (operations > 0)
		{
			rb(stack_b);
			operations--;
		}
		pb(stack_a, stack_b);
	}
	while (stack_b->len > 0)
	{
		pa(stack_a, stack_b);
	}
}
