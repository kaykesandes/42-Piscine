/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:21:24 by kayke.gy          #+#    #+#             */
/*   Updated: 2023/06/12 12:21:48 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_show(int nb)
{
	int	x;

	if (nb < 10)
	{
		x = nb + '0';
		write(1, &x, 1);
		return (0);
	}
	ft_show(nb / 10);
	x = (nb % 10) + '0';
	write(1, &x, 1);
}

void	cut(int x, int y)
{
	if (x < y)
	{	
		if (x < 10)
		{
			write(1, "0", 1);
		}
		ft_show(x);
		write(1, " ", 1);
		if (y < 10)
		{
			write(1, "0", 1);
		}
		ft_show(y);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{	
		y = 0;
		while (y <= 99)
		{
			cut(x, y);
			y++;
		}
		x++;
	}
}

int main(void)
{
	ft_print_comb2();
}
