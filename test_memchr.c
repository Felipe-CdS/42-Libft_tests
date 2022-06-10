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

#define TESTS_QUANT 10

#define CMP_CHECK memchr(entry, search, size) != ft_memchr(entry, search, size)

// Char at first index
static int	test_1(){
	char			*entry = "abcde12345";
	char			search = 'a';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char at random index
static int	test_2(){
	char			*entry = "abcde12345";
	char			search = 'e';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char at last index
static int	test_3(){
	char			*entry = "abcde12345";
	char			search = '5';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char is a space
static int	test_4(){
	char			*entry = "abc d12345";
	char			search = ' ';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// search in an entry with duplicates
static int	test_5(){
	char			*entry = "aabbccddee";
	char			search = 'c';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);

}

// Char isn't at src
static int	test_6(){
	char			*entry = "abcde12345";
	char			search = 'f';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Src is empty
static int	test_7(){
	char			*entry = "";
	char			search = 'f';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char is non printable
static int	test_8(){
	char			entry[100] = {'H', 'e', 'l', 'l', 'o', '\1', '\2', '\3', '\0'};
	char			search = '\0';
	unsigned int	size = ft_strlen(entry);

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// char is hidden
static int	test_9(){
	char			entry[100] = {'A', 'B', '\0', 'C', 'D', 'E'};
	char			search = 'E';
	unsigned int	size = 6;

	if(CMP_CHECK)	return (KO);
	return (OK);
}

// negative value
static int	test_10(){
	int			entry[8] = {1, 2, 3, 0 , 42, -14, 2, 8};
	char			search = -14;
	unsigned int	size = 8;

	if(CMP_CHECK)	return (KO);
	return (OK);
}

void	test_memchr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8, &test_9, &test_10};
	tests_iterator(f_ptr, TESTS_QUANT);
}