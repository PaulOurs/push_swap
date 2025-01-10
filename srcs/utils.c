/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 06:03:07 by paubello          #+#    #+#             */
/*   Updated: 2025/01/10 06:03:42 by paubello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	if (stack->stack)
	{
		free(stack->stack);
	}
	free(stack);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
