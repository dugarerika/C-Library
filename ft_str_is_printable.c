/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/25 16:07:15 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_str_is_printable(char *str)
{
	int	k;
	int	result;

	result = 1;
	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 32 && str[k] <= 126)
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
// 	char *str = "";
// 	printf("%d/n", ft_str_is_printable(str));
// 	return (0);
// }
