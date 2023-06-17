/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:56:32 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/09 14:40:53 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 0 && str[cont] <= 31)
		{
			cont++;
			return (0);
		}
	cont++;
	}
	return (1);
}

// int main(void)
// {
//     char    *string = "123\0123";

//     ft_str_is_printable(string);
//     return 0;
// }