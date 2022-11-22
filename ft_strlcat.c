/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:12:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/22 16:00:10 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

unsigned int	ft_length(char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_length(dest);
	while (src[i] != '\0' && i < size)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (l + i +1);
}

int	main(void)
{
	char	primero[] = "Este es";
	char	ultimo[] = "un potencial larga cadena";
	int	r;
	int s;
	int	tamano = 15;
	char	buffer1[tamano];
	char	buffer2[tamano];
	strcpy(buffer1, primero);
	strcpy(buffer2, primero);
	r = strlcat(buffer1,ultimo,tamano);
	s = ft_strlcat(buffer2,ultimo,tamano);
	puts(buffer1);
	puts(buffer2);
	printf("Value returned: %d\n", r);
	if (s > tamano)
		puts("String truncated");
	else
		puts("String was fully copied");

		printf("Value returned: %d\n", r);
	if (r > tamano)
		puts("String truncated");
	else
		puts("String was fully copied");
	return (0);
}
