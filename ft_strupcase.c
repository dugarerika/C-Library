/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/24 18:53:45 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	k;
	int	r;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			r = str[k] - 32;
			str[k] = r;
		}
	k++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "d1f2g3hj";
// 	ft_strupcase(str);
// 	printf("%s/n", ft_strupcase(str));
// 	return (0);
// }
