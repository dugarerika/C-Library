/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:22 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/27 11:13:58 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	k;
	int	result;

	k = 0;
	result = 0;
	while (s1[k] != '\0' || s2[k] != '\0')
	{
		if (s1[k] == s2[k])
		{
			k++;
		}
		else
		{
			result = s1[k] - s2[k];
			break ;
		}
	}
	result = s1[k] - s2[k];
	return (result);
}

// int main(void)
// {
// 	char *s1 = "akash";
// 	char *s2 = "aka";
// 	printf("%d", ft_strcmp(s1,s2));
// }
