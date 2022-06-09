/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:05:40 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 17:04:38 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int ch);													// Done
int		ft_isdigit(int c); 													// Done
int		ft_isalnum(int c); 													// Done
int		ft_isascii(int c); 													// Done
int		ft_isprint(int c); 													// Done
int		ft_toupper(int c); 													// Done
int		ft_tolower(int c); 													// Done
int		ft_strncmp(const char *s1, const char *s2, size_t n); 				// Done
int		ft_memcmp(const void *s1, const void *s2, size_t n); 				// Done
int		ft_atoi(const char *str); 											// Done

size_t	ft_strlen(const char *s); 											// Done
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); 			// Done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); 			// Done

void	ft_putchar_fd(char c, int fd); 										// Done
void	ft_putstr_fd(char *s, int fd); 										// Done
void	ft_putendl_fd(char *s, int fd); 									// Done
void	ft_putnbr_fd(int n, int fd); 										// Done
void	ft_striteri(char *s, void (*f)(unsigned int, char*));				// XXXX
void	ft_bzero(void *s, size_t n); 										// Done
void	*ft_calloc(size_t count, size_t size);								// XXXX
void	*ft_memset(void *b, int c, size_t len); 							// Done 
void	*ft_memcpy(void *dst, const void *src, size_t n); 					// Done
void	*ft_memmove(void *dst, const void *src, size_t len);				// XXXX
void	*ft_memchr(const void *s, int c, size_t n); 						// Done

char	*ft_strchr(const char *s, int c); 									// Done
char	*ft_strrchr(const char *s, int c); 									// Done
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); 	// Done
char	*ft_strdup(const char *s1); 										// Done
char	*ft_substr(char const *s, unsigned int start, size_t len); 			// Done
char	*ft_strjoin(char const *s1, char const *s2); 						// Done
char	*ft_strtrim(char const *s1, char const *set);						// XXXX
char	*ft_itoa(int n); 													// Done
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));			// XXXX
char	**ft_split(char	const *s, char c);									// XXXX

// Bonus
int		ft_lstsize(t_list *lst);

void	ft_lsadd_front(t_list **lst, t_list *new);
void	ft_lsadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
