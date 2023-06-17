/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:20:32 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/05/30 12:25:35 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_contchar(char str)
{
    int cont;

    while (cont < str)
    {
        int contassci;
        contassci = cont + '0';
        write(1, &contassci, 1);
        cont++;
    }
}

int main(int argc, char const *argv[])
{
    char    name[] = "kayke";
    
    ft_contchar(*name);
    return 0;
}
