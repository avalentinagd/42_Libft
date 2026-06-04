/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:46:49 by angalleg          #+#    #+#             */
/*   Updated: 2026/06/04 23:17:48 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    if (s == NULL)
        return (NULL);
    
    unsigned char *dest_str;
    unsigned char dest_byte;

    dest_str = (unsigned char *)s;
    dest_byte = (unsigned char)c;
    size_t i;
    
    i = 0;
    while (i < n)
    {
        dest_str[i] = dest_byte;
        i++;
    }
    return (s);
}

int main() {
    char buffer[10] = "holA MUNDO";
    
    ft_memset(buffer, 'A', 3);
    printf("%s\n", buffer);  // Imprime: XXXX mundo
    
    return 0;
}

//void *s: Recibe la dirección de memoria a llenar (no importa el tipo)
//void *: Retorna esa misma dirección para poder encadenar llamadas
//ESTO ULTIMO NO ME QUEDA CLARO, INVESTIGARLO!!!!