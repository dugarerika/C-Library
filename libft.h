/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 07:12:52 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/21 15:48:00 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
// #include <libft.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_atoi(char *str);
int	ft_itoa(char *str);
int	ft_toupper(int str);
int	ft_tolower(int str);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);

void	ft_putnbr_fd(int a, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_bzero(void *str, unsigned int n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *str, int a, unsigned int n);
void	*ft_memmove(void *dest, void *src, size_t n );
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

#endif
