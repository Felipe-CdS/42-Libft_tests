/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:00:00 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 13:31:12 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

#define SIZE 100

#define TESTS_QUANT 2

//  1) Basic Test
static int	test_1(){
 	//int			offset;
 	char	*target = "Hello World";
 	char	real_src[SIZE];
	char	real_dst[SIZE];
 	char	test_src[SIZE];
	char	test_dst[SIZE];

 	//offset = 6;
 	ft_strlcpy(real_src, target, 12);
 	ft_strlcpy(test_src, target, 12);
 	// real_dst = real_src + offset;
 	// test_dst = test_src + offset;
 	memmove(	real_dst, real_src, SIZE);
	ft_memmove(	test_dst, test_src, SIZE);

 	printf("%s || %s\t", real_src, test_src);
 	if(memcmp(real_dst, test_dst, 12) || memcmp(real_src, test_src, 12)) return (KO);
 	return (OK);

}

static int	test_2(){
	return (ND);
}

void		test_memmove(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}
