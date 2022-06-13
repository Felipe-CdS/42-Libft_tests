/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:20:47 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 13:17:57 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 5

static int	test_1(){
	int	test_result = OK;
	char *entry = "Hello World!";
	char *real = "H Wrd!";
	char *test;
	
	test = ft_strtrim(entry, "elo");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_2(){
	int	test_result = OK;
	char *entry	= "Hello World!";
	char *real	= "Hello World!";
	char *test;
	
	test = ft_strtrim(entry, "j");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_3(){
	int	test_result = OK;
	char *entry	= "Hello World!";
	char *real	= "Hello World!";
	char *test;
	
	test = ft_strtrim(entry, "");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_4(){
	int	test_result = OK;
	char *entry	= "Hello World!       ";
	char *real	= "HelloWorld!";
	char *test;
	
	test = ft_strtrim(entry, " ");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_5(){
	int	test_result = OK;
	char *entry	= "";
	char *real	= "";
	char *test;
	
	test = ft_strtrim(entry, "abc");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}


void		test_strtrim(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3, &test_4, &test_5 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

