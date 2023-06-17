/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 06:35:07 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/15 10:42:16 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 0;
	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		fact *= nb--;
	return (fact);
}

// int	ft_iterative_factorial(int nb);
// 
// int	main(void)
// {
	// int n;
	// int res;
// 
	// n = -5;
	// while (n <= 10)
	// {
		// res = ft_iterative_factorial(n);
		// printf("n = %d, n! = %d\n", n, res);
		// n++;
	// }
	// return (0);
// }