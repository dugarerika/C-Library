/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/24 18:50:18 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_str_is_uppercase(char *str)
{
	int	k;
	int	result;

	result = 1;
	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
		{
			result = 1;
			k++;
		}
		else
		{
			result = 0;
			break ;
		}
	}
	return (result);
}

// int	main(void)
// {
// 	char *str = "A";
// 	printf("%d/n", ft_str_is_uppercase(str));
// 	return (0);
// }
