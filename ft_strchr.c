/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 21:57:46 by angalleg          #+#    #+#             */
/*   Updated: 2026/06/25 17:02:37 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	return (s - start);
}

char	*ft_strchr(const char *s, int c)
{
	char	c_char;

	c_char = (char)c;
	while (*s)
	{
		if (*s == c_char)
			return ((char *)s);
		s++;
	}
	if (*s == c_char)
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
	int		char_c;
	const char	*str;
	char		*dir_s;

	str = "hola";
	// Test 1: Buscar la 'o'
	char_c = 'o';
	dir_s = ft_strchr(str, char_c);
	printf("Busco 'o': Dirección: %p | Desde la 'o': %s\n", dir_s, dir_s);
	// // Test 2: Buscar el '\0' (Caso especial)
	char_c = '\0';
	dir_s = ft_strchr(str, char_c);
	printf("Busco '\\0': Dirección: %p | ¿Nulo?: %d\n", dir_s, *dir_s == '\0');
	return (0);
}
