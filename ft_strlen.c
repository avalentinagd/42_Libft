/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:50:29 by angalleg          #+#    #+#             */
/*   Updated: 2026/07/02 21:32:39 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	return (s - start);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%zu\n", ft_strlen("hola"));
// 	printf("%zu\n", ft_strlen("hello world"));
// 	return (0);
// }
