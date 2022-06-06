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
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// Truncate string
static int	test_2(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) - 3);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) - 3);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// Truncate string
static int	test_3(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

	src	= "";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);

	if (DST_ERROR || RET_ERROR)	return (KO);
	return (OK);
}

// len == 0
static int	test_4(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret;

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
