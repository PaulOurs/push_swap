/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:42:19 by paubello          #+#    #+#             */
/*   Updated: 2024/12/17 15:42:54 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[0];
	i = 0;
	while (i < stack->len - 1)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[i] = tmp;
}

void	rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[0];
	i = 0;
	while (i < stack->len - 1)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[i] = tmp;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
