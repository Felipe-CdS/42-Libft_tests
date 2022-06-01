/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:05:40 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 10:04:36 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int ch);	//Done
int	ft_isdigit(int c); //Done
int	ft_isalnum(int c); //Done
int	ft_isascii(int c); //Done
int	ft_isprint(int c); //Done
size_t	ft_strlen(const char *s); //Done
void	*ft_memset(void *b, int c, size_t len); //Done 
void	ft_bzero(void *s, size_t n); //Done
void	*ft_memcpy(void *dst, const void *src, size_t n); //Done
void	*ft_memmove(void *dst, const void *src, size_t len); //Done
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c); //Done
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str); //Done
