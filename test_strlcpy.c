/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:33:36 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 12:34:22 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 7

#define DST_ERROR ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) != 0
#define RET_ERROR real_ret != test_ret

// Basic test
static int	test_1(){
	int			result = OK;
	char		*src	= "Hello";
	char		*test_dst = (char *) malloc(15 * sizeof(char));
	char		*real_dst = (char *) malloc(15 * sizeof(char));
	size_t		real_ret, test_ret;

	ft_memset(real_dst, 0, 15);
	ft_memset(real_dst, 'a', 6);
	ft_memset(test_dst, 0, 15);
	ft_memset(test_dst, 'a', 6);
	
	real_ret = strlcpy(real_dst, 		src,	15);
	test_ret = ft_strlcpy(test_dst, 	src,	15);

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

// Truncate string
static int	test_2(){
	int			result = OK;
	char		*src	= "Hello World";
	char		*test_dst = (char *) malloc(sizeof(20));
	char		*real_dst = (char *) malloc(sizeof(20));
	size_t		real_ret, test_ret;

	ft_bzero(real_dst, 20);
	ft_bzero(test_dst, 20);
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) - 3);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) - 3);

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

// Empty src
static int	test_3(){
	int			result = OK;
	char		*src	= "";
	char		*test_dst = (char *) malloc(sizeof(20));
	char		*real_dst = (char *) malloc(sizeof(20));
	size_t		real_ret, test_ret;

	ft_memset(real_dst, 0, 15);
	ft_memset(real_dst, 'r', 6);
	ft_memset(test_dst, 0, 15);
	ft_memset(test_dst, 'r', 6);
	
	real_ret = strlcpy(real_dst, 		src,	15);
	test_ret = ft_strlcpy(test_dst, 	src,	15);

	if (DST_ERROR || RET_ERROR)	result = KO;
	free(test_dst);
	free(real_dst);
	return (result);
}

// len == 0
static int	test_4(){
	char		*src, real_dst[100] = {}, test_dst[100] = {};
	size_t		real_ret = 0, test_ret = 0;

	src	= "";
	real_ret = strlcpy(real_dst, 		src,	0);
	test_ret = ft_strlcpy(test_dst, 	src,	0);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// len too big for src
static int	test_5(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	100);
	test_ret = ft_strlcpy(test_dst, 	src,	100);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// non printable entry
static int	test_6(){
	char		real_dst[100], test_dst[100], src[100] = {'1', 'a', '\2', '\1', '\0'};
	size_t		real_ret, test_ret;

	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// non empty dst and bigger than src
static int	test_7(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

	src = "Hello Everybody";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

void		test_strlcpy(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}
