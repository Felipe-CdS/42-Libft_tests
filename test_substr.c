/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:00:25 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 16:26:03 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 5

// 1) Basic test
static int	test_1(){
	int		test_result = OK;
	char	*s1 = "Hello World";
	char	*dst;
	
	dst = ft_substr(s1, 0, 11);

	if(strcmp(dst, "Hello World") != 0) test_result = KO;
	free(dst);
	return (test_result);
}

// 2) Basic test
static int	test_2(){
	int		test_result = OK;
	char	*s1 = "Hello World";
	char	*dst;
	
	dst = ft_substr(s1, 6, 5);

	if(strcmp(dst, "World") != 0) test_result = KO;
	free(dst);
	return (test_result);
}

// 3) LEN == 0
static int	test_3(){
	return (ND);
	int		test_result = OK;
	char	*s1 = "Hello World";
	char	*dst;
	
	dst = ft_substr(s1, 6, 0);

	if(strcmp(dst, "") != 0) test_result = KO;
	free(dst);
	return (test_result);
}

// 4) src empty
static int	test_4(){
	return (ND);
	int		test_result = OK;
	char	*s1 = "";
	char	*dst;
	
	dst = ft_substr(s1, 6, 6);

	if(strcmp(dst, "") != 0) test_result = KO;
	free(dst);
	return (test_result);
}

// 5) max len > src size
static int	test_5(){
	int		test_result = OK;
	char	*s1 = "Hello World";
	char	*dst;
	
	dst = ft_substr(s1, 6, 100);

	if(strcmp(dst, "World") != 0) test_result = KO;
	free(dst);
	return (test_result);
}

void test_substr()
{
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3, &test_4, &test_5 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
