/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:26:25 by paubello          #+#    #+#             */
/*   Updated: 2024/12/17 15:41:40 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp;
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->len < 2)
		return ;
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
