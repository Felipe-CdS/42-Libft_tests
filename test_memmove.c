/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:00:00 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 12:34:28 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

#define SIZE 100

#define TESTS_QUANT 2

static int	test_1(){
	return (ND);
}

static int	test_2(){
	return (ND);
}

void		test_memmove(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}

// int test_memmove()
// {
// 	int			offset;
// 	char 		target[SIZE] = "Hello World...";
// 	char		real_src[SIZE], *real_dst;
// 	char		test_src[SIZE], *test_dst;

// 	// 1) Basic Test
// 	//	>Test setup
// 	offset = 6;
// 	strcpy(real_src, target);
// 	strcpy(test_src, target);
// 	real_dst = real_src + offset;
// 	test_dst = test_src + offset;
// 	//	>Test exec
// 	memmove(	real_dst, real_src, SIZE);
// 	ft_memmove(	test_dst, test_src, SIZE);

// 	printf("%s || %s\t %s || %s", real_src, real_dst, test_src, test_dst);
// 	if(strcmp(real_dst, test_dst) || strcmp(real_src, test_src)) return (1);
// 	return (1);
// }
