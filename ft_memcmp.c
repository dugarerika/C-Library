/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:44:54 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/13 14:10:40 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	src[] = "xcn";
// 	char	dest[] = "abz";

// 	int print1 = memcmp(dest, src, 2);
// 	int print2 = ft_memcmp(dest, src, 2);

// // // 	// char *dest_print1 = memcpy(NULL, NULL, 3);
// // // 	// char *dest_print2 = ft_memcpy(NULL, NULL, 3);

// // // 	// char *dest_print1 = memcpy(NULL, NULL, 3);
// // // 	// char *dest_print2 = ft_memcpy(NULL, NULL, 3);

// // // 	printf("   src: %s\n", src);
// // // 	printf("  dest: %s\n", dest);
// 	printf("result1: %d\n", print1);
// 	printf("result2: %d\n", print2);
// // // 	printf("  dest: %p\n", dest);
// // // 	printf("result1: %p\n", dest_print1);
// // // 	printf("result2: %p\n", dest_print2);
// // // 	// strcpy(dest; "destino information informacion");
// // // 	// // puts(dest);
// // // 	// strcpy(src, "fuente information informacion");
// // // 	// // puts(src);
// }
