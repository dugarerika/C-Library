/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:42 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/07 17:50:43 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
   char *ss;
   char *ts;
   size_t ls1;
   size_t ls2;

   ts = NULL;
   ls1 = ft_strlen(s1);
   ls2 = ft_strlen(s2);
   if (s1 == NULL && s2 == NULL)
      return (0);
   ss = (char *) malloc (ls1 + ls2 + 1);
   if(ss == NULL)
      return (0);
   while (*s1 != '\0')
   {
      *ts++ = *s1++;
   }
   while (*s2 != '\0')
   {
      *ts++  = *s2++;
   }
   *ts = '\0';
   ss = ts;
   return (ss);
}

// int main(void)
// {
//    char *sufix = "sufix";
//    char *prefix = "prefix";
// }