/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:43:13 by paubello          #+#    #+#             */
/*   Updated: 2024/12/17 15:44:15 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[stack->len - 1];
	i = stack->len - 1;
	while (i > 0)
	{
		stack->stack[i] = stack->stack[i - 1];
		i--;
	}
	stack->stack[0] = tmp;
}

void	rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[stack->len - 1];
	i = stack->len - 1;
	while (i > 0)
	{
		stack->stack[i] = stack->stack[i - 1];
		i--;
	}
	stack->stack[0] = tmp;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
