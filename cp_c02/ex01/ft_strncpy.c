/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 02:18:24 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/09 23:49:32 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

// int	main(void)
// {
// 	printf("Resultado da função Criada\n");
// 	char	name1[] = "kayke";
// 	char	teste1[20];
// 	ft_strncpy(teste1, name1, 3);
// 	printf("%s \n", teste1);
// 	printf("Resultado da função importada\n ");
// 	char	name[] = "kayke";
// 	char	teste[20];
// 	strncpy(teste, name, 3);
// 	printf("%s", teste);
// }