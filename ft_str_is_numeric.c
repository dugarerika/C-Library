/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/22 18:44:31 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_str_is_numeric(char *str)
{
	int	k;
	int	result;

	k = 0;
	result = 1;
	while (str[k] != '\0')
	{
		if (str[k] >= '0' && str[k] <= '9')
		{
			result = 1;
			k++;
		}
		else
		{
			result = 0;
			k++;
			break ;
		}
	}
	return (result);
}

// int	main(void)
// {
// 	char *str = "12345678234567890";
// 	printf("%d/n", ft_str_is_numeric(str));
// }
