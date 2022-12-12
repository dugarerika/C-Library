/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:12:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/12 13:10:02 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <libft.h>

/*
     The strlcpy() and strlcat() functions copy and concatenate strings with
     the same input parameters and output result as snprintf(3).  They are
     designed to be safer, more consistent, and less error prone replacements
     for the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer and
     guarantee NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0.

     strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/

unsigned int	ft_length1(char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	ldst = ft_length1(dst);
	lsrc = ft_length1(src);

	while (*dst && size > 0 && size --)
	{
		dst ++;
		i++;
	}
	while (*src && size > 1 && size --)
	{
		*dst++ = *src++;
	}
	if (size == 1)
		*dst = '\0';
	return (ldst + i);
}

// int	main(void)
// {
// 	char	primero[] = "Este es";
// 	char	ultimo[] = "un potencial larga";
// 	int	r;
// 	int s;
// 	int	tamano = 15;
// 	char	buffer1[tamano];
// 	char	buffer2[tamano];
// 	strcpy(buffer1, primero);
// 	strcpy(buffer2, primero);
// 	r = strlcat(buffer1,ultimo,tamano);
// 	s = ft_strlcat(buffer2,ultimo,tamano);
// 	puts(buffer1);
// 	puts(buffer2);
// 	printf("Value returned: %d\n", r);
// 	if (r > tamano)
// 		puts("String truncated");
// 	else
// 		puts("String was fully copied");
// printf("Value returned: %d\n", s);
// 	if (s > tamano)
// 		puts("String truncated");
// 	else
// 		puts("String was fully copied");
// 	return (0);
// }
