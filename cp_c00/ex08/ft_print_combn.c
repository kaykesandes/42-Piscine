/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:10:22 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/12 12:18:27 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pot(int x, int n)
{
	if (n > 0)
	{
		return (ft_pot(x, --n) * x);
	}
	else
		return (1);
}

int	show(int nb)
{
	int	x;

	if (nb < 10)
	{
		x = nb + '0';
		write(1, &x, 1);
		return (0);
	}
	show(nb / 10);
	x = (nb % 10) + '0';
	write(1, &x, 1);
}
