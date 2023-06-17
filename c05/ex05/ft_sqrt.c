/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:02:15 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/14 11:02:15 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	t_sqrt(int nb)
{
	long int	index;
	long int	radicando;

	radicando = nb;
	if (radicando <= 0)
		return (0);
	if (radicando == 1)
		return (1);
	index = 2;
	if (radicando >= 2)
	{
		while (index * index <= radicando)
		{
			if (index * index == radicando)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
