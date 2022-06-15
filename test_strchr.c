/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:42:27 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 12:15:16 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 10

#define CMP_CHECK strchr(entry, search) != ft_strchr(entry, search)

// Char at first index
static int	test_1(){
	char			*entry = "abcde12345";
	char			search = 'a';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char at random index
static int	test_2(){
	char			*entry = "abcde12345";
	char			search = 'e';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char at last index
static int	test_3(){
	char			*entry = "abcde12345";
	char			search = '5';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char is a space
static int	test_4(){
	char			*entry = "abc d12345";
	char			search = ' ';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// search in an entry with duplicates
static int	test_5(){
	char			*entry = "aabbccddee";
	char			search = 'c';
	if(CMP_CHECK)	return (KO);
	return (OK);

}

// Char isn't at src
static int	test_6(){
	char			*entry = "abcde12345";
	char			search = 'f';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Src is empty
static int	test_7(){
	char			*entry = "";
	char			search = 'f';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Src  and search are empty
static int	test_8(){
	char			*entry = "";
	char			search = '\0';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// Char is non printable
static int	test_9(){
	char			entry[100] = {'H', 'e', 'l', 'l', 'o', '\1', '\2', '\3', '\0'};
	char			search = '\1';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

// char is hidden
static int	test_10(){
	char			entry[100] = {'A', 'B', '\0', 'C', 'D', 'E'};
	char			search = 'E';
	if(CMP_CHECK)	return (KO);
	return (OK);
}

void	test_strchr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8, &test_9, &test_10};
	tests_iterator(f_ptr, TESTS_QUANT);
}