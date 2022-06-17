	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
/*   libtests.h                                         :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2022/05/13 15:59:45 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 14:05:31 by fcoutinh         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

#define OK 1
#define KO 0
#define ND -1

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"

typedef int (*t_func_array)(void);

void	test_isalpha();
void	test_isdigit();
void	test_isalnum();
void	test_isascii();
void	test_isprint();
void	test_strlen();
void	test_memset();
void	test_bzero();
void	test_memcpy(); 
void	test_memmove(); 
void	test_strlcpy();
void	test_strlcat();
void	test_toupper();
void	test_tolower();
void	test_strchr();
void	test_strrchr();
void	test_strncmp();
void	test_memchr();
void	test_memcmp();
void	test_strnstr();
void	test_atoi();

void	test_calloc();
void	test_strdup();

void	test_substr();
void	test_strjoin();
void	test_strtrim();
void	test_split();
void	test_itoa();
void	test_strmapi();
void	test_striteri();
void	test_putchar_fd();
void	test_putstr_fd();
void	test_putendl_fd();
void	test_putnbr_fd();

/*==========================================*/
/*					Bonus					*/
/*==========================================*/

void	test_lstnew();
void	test_lstadd_front();
void	test_lstsize();
void	test_lstlast();
void	test_lstadd_back();
void	test_lstdelone();
void	test_lstclear();

/*==========================================*/
/*					Misc					*/
/*==========================================*/

void	test_all();
void	tests_iterator(t_func_array *f_ptr, int tests_quant);
void	printnmem(void *s, size_t n);
