/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/24 18:50:15 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_str_is_lowercase(char *str)
{
	int	k;
	int	result;

	result = 1;
	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
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
// 	char *str = "asA";
// 	printf("%d/n", ft_str_is_lowercase(str));
// 	return (0);
// }
