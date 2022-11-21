/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:39:54 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/21 11:37:49 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

/* The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
*/

void	*ft_memmove(void *dest, void *src, unsigned int n )
{
	unsigned int	i;
	unsigned char	*pd;
	unsigned char	*ps;

	pd = dest;
	ps = src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[50];
	char	src[50];

	strcpy(dest, "destino information informacion");
	puts(dest);
	strcpy(src, "fuente information informacion");
	puts(src);
	memmove(dest, src, 0);
	puts(src);
	puts(dest);
	ft_memmove(dest, src, 0);
	puts(src);
	puts(dest);
}
