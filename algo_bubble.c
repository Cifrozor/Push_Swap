/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bubble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 11:56:21 by ljacquet          #+#    #+#             */
/*   Updated: 2020/10/01 14:48:30 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Downloads/Push_S/push_swap.h"
#include "../Downloads/Push_S/checker.h"

t_list		algo_bubble(t_list x)
{
	t_list	y;
	int		o;

	o = 1;
	while (o == 1)
	{
		o = 0;
		y = x;
		while (y)
		{
			if (x > x->next)
			{
				swap_ab(y);
				o = 1;
			}
			y++;
		}
		x = y;
	}
	return (x);
}