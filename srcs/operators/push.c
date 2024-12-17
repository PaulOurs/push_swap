/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:41:42 by paubello          #+#    #+#             */
/*   Updated: 2024/12/17 15:42:02 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_b->len == 0)
		return ;
	i = stack_a->len;
	while (i > 0)
	{
		stack_a->stack[i] = stack_a->stack[i - 1];
		i--;
	}
	stack_a->stack[0] = stack_b->stack[0];
	stack_a->len++;
	i = 0;
	while (i < stack_b->len)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->len--;
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_a->len == 0)
		return ;
	i = stack_b->len;
	while (i > 0)
	{
		stack_b->stack[i] = stack_b->stack[i - 1];
		i--;
	}
	stack_b->stack[0] = stack_a->stack[0];
	stack_b->len++;
	i = 0;
	while (i < stack_a->len)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->len--;
}
