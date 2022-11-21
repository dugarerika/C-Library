/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:30:45 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/05 08:31:00 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}

char	*ft_copy(char *cpy, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *) malloc(sizeof(char *) * ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	ft_copy(str, src);
	return (str);
}

// int main()
// {
// 	char *str = "Hello";
// 	char *paste = NULL;

// 	paste = ft_strdup(str);
// 	printf("%s\n", paste);
// 	return (0);
// }
