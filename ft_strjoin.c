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
   size_t i;
   size_t j;
   char *ss;
   char *ps1;
   char *ps2;

   ps1 = (char *) s1;
   ps2 = (char *) s2;
   ss = (char *) malloc ( ft_strlen(s1) + ft_strlen(s2) - 1);
   if(s1 == NULL && s2 == NULL)
      return (0);
   if(ss == NULL)
      return (0);
   i = 0;
   while (ps1[i] != '\0')
   {
      ss[i] = ps1[i];
      i++;
   }
   j = 0;
   while (ps2[i] != '\0')
   {
      ss[i] = ps2[j];
      i++;
      j++;
   }
   ss[i] = '\0';
   return ((char *)ss);
}

// int main(void)
// {
//    char *sufix = "sufix";
//    char *prefix = "prefix";
// }