/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:12:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/15 18:42:47 by etavera-         ###   ########.fr       */
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

unsigned int	ft_length1(char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k -1);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	char	*pdst;
	int	n;

	n = size - ft_length1(dst);
	pdst = (char *) dst + ft_length1(dst);
	while (n)
	{
		*pdst++ = *src++;
		n--;
	}
	if (n == 0)
		pdst[size - ft_length1(dst)] = '\0';
	return (size - ft_length1(dst));
}

int	main(void)
{
	char	dst[] = "Este es";
	char	src[] = "un potencial larga";
	size_t	r;
	size_t s;
	int	tamano = 15;
	r = strlcat(dst,src,tamano);
	s = ft_strlcat(dst,src,tamano);
	printf("Value returned: %zu\n", r);

}
