/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:43:05 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/12 10:38:35 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
