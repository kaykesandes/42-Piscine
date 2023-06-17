/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:30:14 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/09 14:46:32 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}

// int     main(void)
// {
//         char    string[] = "teste";
//         char    cop[] = "aqui";
//         char    cop1[] = "aqui2";
//         ft_strcpy(cop1, string);
//  	printf("Resultado: %s \n", cop1);       
// 	strcpy(cop, string);
// 	printf("Resultado: %s", cop);
// }
