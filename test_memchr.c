/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:19:05 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 15:48:56 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 7

#define CHECK_COND memchr(entry, search, size) != ft_memchr(entry, search, size)

// Char at first index
static int	test_1(){		
	return (ND);
}

// Char at random index
static int	test_2(){		
	return (ND);
}

// Char at last index
static int	test_3(){		
	return (ND);
}

// Char is a space
static int	test_4(){		
	return (ND);
}

// Char is a space
static int	test_5(){		
	return (ND);
}

// Char isn't at src
static int	test_6(){		
	return (ND);
}

// Src is empty
static int	test_7(){
	return (ND);
}

void	test_memchr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}

// int	test_memchr()
// {
// 	char		*entry;
// 	char		search;
// 	char		sp_c1[100] = {'H', 'e', 'l', 'l', 'o', '\1', '\2', '\3', '\0'};
// 	char		sp_c2[100];
// 	unsigned int	size;

// 	// search at first index
// 	entry	= "abcde12345";
// 	search 	= 'a';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (1);

// 	// search at last index
// 	entry	= "abcde12345";
// 	search 	= '5';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (2);

// 	// search at random index
// 	entry	= "abcde12345";
// 	search 	= 'e';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (3);

// 	// search isn't alnum
// 	entry	= "a bcde1234";
// 	search 	= ' ';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (4);

// 	// search in an entry with duplicates
// 	entry	= "aabbccddee";
// 	search 	= 'c';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (5);

// 	// char isn't at src
// 	entry	= "abcde12345";
// 	search 	= 'f';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (6);

// 	// src is empty
// 	entry	= "";
// 	search 	= 'f';
// 	size	= ft_strlen(entry);
// 	if(memchr(entry, search, size) != ft_memchr(entry, search, size))	return (7);

// 	// char is non printable
// 	//char	sp_c1[100] = {'H', 'e', 'l', 'l', 'o', '\1', '\2', '\3', '\0'};
// 	search 	= '\1';
// 	size	= ft_strlen(sp_c1);
// 	if(memchr(sp_c1, search, size) != ft_memchr(sp_c1, search, size))	return (8);

// 	// src isn't initialized
// 	//char	sp_c2[100];
// 	search 	= 'a';
// 	size	= ft_strlen(sp_c2);
// 	if(memchr(sp_c2, search, size) != ft_memchr(sp_c2, search, size))	return (9);

// 	return (0);
// }
