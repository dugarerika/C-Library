/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/23 14:22:34 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
		{
			str[k] = str[k] + 32;
		}
		k++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "dfCFV1215GHJj";
// 	ft_strlowcase(str);
// 	printf("%s/n", str);
// 	return (0);
// }
