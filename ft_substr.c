/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:22 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/23 09:32:10 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptrstr;
	size_t	i;
	size_t	j;
	i = (size_t) start;
	ptrstr = (char *) malloc(len + 1);

	if (ptrstr == NULL || s == NULL || len == 0)
		return (0);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		ptrstr[j] = (char) &s[i];
		i++;
		j++;
	}
	return (ptrstr);




}

int	main(void)
{

}
