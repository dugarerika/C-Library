/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/25 12:52:50 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	k;

	k = 0;
	while (str[k] != 0)
	{
		if (str[k + 1] >= 'A' && str[k + 1] < 'Z')
		{
			str[k + 1] = str[k + 1] + 32;
		}
		else if (str[0] >= 'a' && str[0] < 'z' )
		{
			str[0] = str[0] - 32;
		}
		else if (((str[k] >= 32 && str[k] <= 47)
				|| (str[k] >= 58 && str[k] <= 64)
				|| (str[k] >= 91 && str[k] <= 96)
				|| (str[k] >= 123 && str[k] <= 126))
			&& (str[k + 1] >= 'a' && str[k + 1] <= 'z'))
		{
			str[k + 1] = str[k +1] - 32;
		}
	k++;
	}
	return (str);
}

// int	main()
// {
// 	char str[] = "salut, comment tu vas ?
//42{mots quarante-deux; cinquante+et+un";
// 	// char str[] = "";
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }
