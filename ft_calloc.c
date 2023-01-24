/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:01:34 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/12 13:08:55 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

void	*ft_calloc(size_t elemento, size_t bloque)
{
   char *p;
   unsigned int	i;
   i = 0;
   p = malloc(elemento * bloque);
   if ( elemento == SIZE_MAX || bloque == SIZE_MAX)
      return (NULL);
   if ( p == NULL)
      return ((void *) p);
   while (i <= elemento * bloque)
	{
		p[i] = 0;
		i++;
	}
   return ((void *) p);
}