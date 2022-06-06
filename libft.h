/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:05:40 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 09:05:47 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int		ft_isalpha(int ch);	//Done
int		ft_isdigit(int c); // Done
int		ft_isalnum(int c); // Done
int		ft_isascii(int c); // Done
int		ft_isprint(int c); // Done
size_t	ft_strlen(const char *s); // Done
void	*ft_memset(void *b, int c, size_t len); // Done 
void	ft_bzero(void *s, size_t n); // Done
void	*ft_memcpy(void *dst, const void *src, size_t n); // Done
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // Done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // Done
int		ft_toupper(int c); // Done
int		ft_tolower(int c); // Done
char	*ft_strchr(const char *s, int c); // Done
char	*ft_strrchr(const char *s, int c); // Done
int		ft_strncmp(const char *s1, const char *s2, size_t n); // Done
void	*ft_memchr(const void *s, int c, size_t n); // Done
int		ft_memcmp(const void *s1, const void *s2, size_t n); // Done
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); // Done
int		ft_atoi(const char *str); //Done

void	*ft_calloc(size_t count, size_t size);
char	*strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char	const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
