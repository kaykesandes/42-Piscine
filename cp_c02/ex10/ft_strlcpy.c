/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:13:35 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/07 23:27:07 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	if (!src)
		return (0);
	counter = ft_strlen(src);
	if (!size)
		return (counter);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}

// int main(void)
// {
//     char source[] = "Hello, world!";
//     char destination[12]; // Tamanho suficiente para armazenar a string

//     size_t length = ft_strlcpy(destination, source, sizeof(destination));

//     printf("String de origem: %s\n", source);
//     printf("String de destino: %s\n", destination);
//     printf("Comprimento truncado: %zu\n", length);
// }
// //____________SAIDA______________
// // String de origem: Hello, world!
// // String de destino: Hello, wor
// // Comprimento truncado: 12
