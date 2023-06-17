/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:22:11 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/12 21:53:15 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include <stdio.h>
 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_length;

	total_length = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size > i)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (total_length);
	}
	return (ft_strlen(src) + size);
}


int main(void)
{
	char test[] = "ola mundo";
	char testt[] = "dale";
	
	printf("%d", ft_strlcat(test, testt, 10));
	return 0;
}

