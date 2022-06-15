/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:43:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 13:35:43 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 6

#define DST_ERROR ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) != 0
#define RET_ERROR real_ret != test_ret

// 1) Basic test
static int test_1(){
	int			result = OK;
	char		*src	= "Hello";
	char		*test_dst = (char *) malloc(15 * sizeof(char));
	char		*real_dst = (char *) malloc(15 * sizeof(char));
	size_t		real_ret, test_ret;

	ft_memset(real_dst, 0, 15);
	ft_memset(real_dst, 'r', 6);
	ft_memset(test_dst, 0, 15);
	ft_memset(test_dst, 'r', 6);
	
	real_ret = strlcat(real_dst, 		src,	15);
	test_ret = ft_strlcat(test_dst, 	src,	15);

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

// 2) Truncate string
static int test_2(){
	char		*src, real_dst[100] = {}, test_dst[100] = {};
	size_t		real_ret = 0, test_ret = 0, buf_size  = 0;

	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 33;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// 3) Empty Entry
static int test_3(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// 4) len == 0
static int test_4(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 0;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// 5) src too big
static int test_5(){
	int			result = OK;
	char		*src	= "Hello Worldddddddddddddd";
	char		*test_dst = (char *) malloc(100 * sizeof(char));
	char		*real_dst = (char *) malloc(100 * sizeof(char));
	size_t		real_ret, test_ret;

	ft_memset(real_dst, 0, 100);
	ft_memset(test_dst, 0, 100);
	ft_memset(real_dst, 'r', 13);
	ft_memset(test_dst, 'r', 13);
	
	real_ret = strlcat(real_dst, 		src,	ft_strlen(real_dst) + ft_strlen(src));
	test_ret = ft_strlcat(test_dst, 	src,	ft_strlen(real_dst) + ft_strlen(src));

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

static int test_6(){
	int			result = OK;
	char		*src	= "Hello World Hello World";
	char		*test_dst = (char *) malloc(30 * sizeof(char));
	char		*real_dst = (char *) malloc(30 * sizeof(char));
	size_t		real_ret, test_ret;

	ft_memset(real_dst, 0, 30);
	ft_memset(test_dst, 0, 30);
	ft_memset(real_dst, 'r', 29);
	ft_memset(test_dst, 'r', 29);
	
	real_ret = strlcat(real_dst, 		src,	ft_strlen(src));
	test_ret = ft_strlcat(test_dst, 	src,	ft_strlen(src));

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

void	test_strlcat(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6};
	tests_iterator(f_ptr, TESTS_QUANT);
}
