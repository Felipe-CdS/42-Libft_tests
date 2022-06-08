/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:00:00 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 11:53:34 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 3

//  1) Basic Test (No overlap)
static int	test_1(){
		return (ND);
	int 	size = 12;
 	char	*target = "Hello World";
 	char	real_src[100], real_dst[100];
	char	test_src[100], test_dst[100];

 	ft_strlcpy(	real_src, target, size);
 	ft_strlcpy(	test_src, target, size);

 	memmove(	real_dst, real_src, size);
	ft_memmove(	test_dst, test_src, size);
	
 	// printf("%s %s\t", test_dst, real_dst);
 	if(memcmp(real_dst, test_dst, size) || memcmp(real_src, test_src, size)) return (KO);
 	return (OK);
}

//  2) Full overlap
static int	test_2(){
	return (ND);
	int 	size = 12;
 	char	*target = "Hello World";
 	char	real_src[size], *real_dst;
 	char	test_src[size], *test_dst;

 	ft_strlcpy(real_src, target, size);
 	ft_strlcpy(test_src, target, size);
 	real_dst = memmove(		real_src, real_src, size);
	test_dst = ft_memmove(	test_src, test_src, size);

 	// printf("%s %s\t", test_dst, real_dst);
 	if(memcmp(real_dst, test_dst, size) || memcmp(real_src, test_src, size)) return (KO);
 	return (OK);
}

//  3) src < dst with overlap
static int	test_3(){
	return (ND);
	int 	size = 12;
 	char	*target = "Hello World";
 	char	real_src[size], *real_dst;
 	char	test_src[size], *test_dst;

 	ft_strlcpy(real_src, target, size);
 	ft_strlcpy(test_src, target, size);
 	real_dst = memmove(		real_src + 5, real_src, size);
	test_dst = ft_memmove(	test_src + 5, test_src, size);

 	printf("%s %s\t", test_dst, real_dst);
	printnmem(real_src, size);
	printf("||");
	printnmem(test_src, size);
 	if(memcmp(real_dst, test_dst, size) || memcmp(real_src, test_src, size)) return (KO);
 	return (OK);
}

void		test_memmove(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3};
	tests_iterator(f_ptr, TESTS_QUANT);
}
