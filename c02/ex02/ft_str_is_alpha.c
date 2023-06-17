/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:53:44 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/10 00:14:23 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] > 96 && str[c] < 123) || (str[c] > 64 && str[c] < 91)))
			return (0);
		c++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *string = "sdjksandkwqe";
// 	int teste = ft_str_is_alpha(string);
// 	printf("%d", teste);
//     return 0;
// }