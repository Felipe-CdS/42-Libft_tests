/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:59:45 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 09:34:36 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	test_isalpha();
int	test_isdigit();
int	test_isalnum();
int	test_isascii();
int	test_isprint();
int	test_strlen();
int	test_memset();
int	test_bzero();
int	test_memcpy(); 
int	test_strlcpy();
int	test_toupper();
int	test_tolower();
int	test_strchr();
int	test_strrchr();
int	test_strncmp();
int	test_memchr();
int	test_memcmp();
int	test_strnstr();
int	test_atoi();

void	print_char_n_null();
void	test_single();
void	test_all();
