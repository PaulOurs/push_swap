/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 06:00:51 by paubello          #+#    #+#             */
/*   Updated: 2025/01/10 06:01:05 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	// Implement your sorting algorithm here
	// For example, you can use a simple bubble sort for demonstration purposes
	int	i, j;
	int	temp;

	for (i = 0; i < stack_a->len - 1; i++)
	{
		for (j = 0; j < stack_a->len - i - 1; j++)
		{
			if (stack_a->stack[j] > stack_a->stack[j + 1])
			{
				temp = stack_a->stack[j];
				stack_a->stack[j] = stack_a->stack[j + 1];
				stack_a->stack[j + 1] = temp;
			}
		}
	}
}
