/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:50:29 by angalleg          #+#    #+#             */
/*   Updated: 2026/06/04 18:33:04 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    const char *start = s;
    
    while(*s)
    {
        s++;
    }
    return (s - start);
}

int main(void)
{
    printf("%zu\n", ft_strlen("hola"));
    printf("%zu\n", ft_strlen("hello world"));
    return (0);
}