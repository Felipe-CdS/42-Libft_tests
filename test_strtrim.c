/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:20:47 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 16:24:23 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 5

static int	test_1(){
	int	test_result = OK;
	char *entry = "    Hello World!   ";
	char *real = "Hello World!";
	char *test;
	
	test = ft_strtrim(entry, " ");	

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_2(){
	int	test_result = OK;
	char *entry	= "Hello World!";
	char *real	= "Hello World!";
	char *test;
	
	test = ft_strtrim(entry, " ");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_3(){
	int	test_result = OK;
	char *entry	= "lorem \n ipsum \t dolor \n sit \t amet";
	char *real	= "lorem \n ipsum \t dolor \n sit \t amet";
	char *test;
	
	test = ft_strtrim(entry, " ");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_4(){
	int	test_result = OK;
	char *entry	= "       Hello World!";
	char *real	= "ello World!";
	char *test;
	
	test = ft_strtrim(entry, "H ");

	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}

static int	test_5(){
	int	test_result = OK;
	char *entry	= "                ";
	char *real	= "";
	char *test;
	
	test = ft_strtrim(entry, " ");
	if(strcmp(real, test) != 0) test_result = KO;
	free(test);
	return (test_result);
}


void		test_strtrim(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3, &test_4, &test_5 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

