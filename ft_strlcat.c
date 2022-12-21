/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:12:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/21 06:17:29 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_length1(char *s)
{
	size_t	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	psize;
	size_t	lsrc;
	char	*psrc;

	psrc = (char *)src;
	lsrc = ft_length1(psrc);
	psize = 0;
	if (dstsize == 0)
		return (ft_length1(psrc));
	while (dstsize > 0 && *dst)
	{
		dst++;
		dstsize--;
		psize++;
	}
	while (dstsize > 1 && *psrc)
	{
		*dst++ = *psrc++;
		dstsize--;
	}
	if (dstsize >= 1)
		*dst = '\0';
	if (dstsize == 0 && dst == 0)
		return (lsrc);
	return (psize + lsrc);
}

// int	main(void)
// {
// 	char	dst[15];
// 	char	dst2[15];
// 	memset(dst, 0, 15);
// 	memset(dst2, 0, 15);
// 	memset(dst, 'r', 6);
// 	memset(dst2, 'r', 6);
// 	dst[10] = 'a';
// 	dst2[10] = 'a';
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	size_t	r;
// 	size_t s;
// 	r = strlcat(dst,src,6);
// 	s = ft_strlcat(dst2,src,6);
// 	printf("Value returned orig : %zu\n%s\n", r,dst);
// 	printf("Value returned mine: %zu\n%s\n", s, dst2);

// }
