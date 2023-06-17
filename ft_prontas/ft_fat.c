/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:01:09 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/05/30 10:01:43 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fatorial(int n)
{
	if (n > 0)
	{
		return (n * ft_fatorial(n - 1));
	}
	else
	{
		return (1);
	}
}
