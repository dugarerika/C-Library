/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:42:19 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 12:15:08 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size != 0 && (i < (size - 1)))
		{
			dest[i] = (char)src[i];
			j++;
		}
		i++;
	}
	if (size != 0)
		dest[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	// char	primero[] = "primero";
// 	// char 	ultimo[] = "ultimo";
// 	// int r;
// 	// int s;
// 	char dest[20], src[20], dest2[20];
// 	strcpy(dest, "destino thi");
// 	strcpy(dest2, "destino thi");
// 	strcpy(src, "fuente thi");
// 	printf("%zu %s\n",(strlcpy(dest, src, 0)), dest);
// 	printf("%zu %s",(ft_strlcpy(dest2, src, 0)),dest2);
// }
