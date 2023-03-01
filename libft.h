/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:41:23 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/04 23:22:47 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    LIBFT_H
# define LIBFT_H 

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char const *str, unsigned int s, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *str, int c);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalnum(int x);
int		ft_isalpha(int c);
int		ft_isascii(int y);
int		ft_isdigit(int c);
int		ft_isprint(int y);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
int		ft_toupper(int y);
int		ft_tolower(int y);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);

#endif
