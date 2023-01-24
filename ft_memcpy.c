/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:06:13 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 11:43:13 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = (char *) dest;
	psrc = (char *) src;
	while (n)
	{
		*pdest++ = *psrc++;
		n--;
	}
	return ((void *) dest);
}

// int	main(void)
// {
// 	char	src[] = "copia esto";
// 	char	dest[100];

// 	char *dest_print1 = memcpy(dest, src, strlen(src) + 1);
// 	char *dest_print2 = ft_memcpy(dest, src, strlen(src) + 1);

// 	// char *dest_print1 = memcpy(NULL, NULL, 3);
// 	// char *dest_print2 = ft_memcpy(NULL, NULL, 3);

// 	// char *dest_print1 = memcpy(NULL, NULL, 3);
// 	// char *dest_print2 = ft_memcpy(NULL, NULL, 3);

// 	printf("   src: %s\n", src);
// 	printf("  dest: %s\n", dest);
// 	printf("result1: %s\n", dest_print1);
// 	printf("result2: %s\n", dest_print2);
// 	printf("  dest: %p\n", dest);
// 	printf("result1: %p\n", dest_print1);
// 	printf("result2: %p\n", dest_print2);
// 	// strcpy(dest; "destino information informacion");
// 	// // puts(dest);
// 	// strcpy(src, "fuente information informacion");
// 	// // puts(src);
// }
