/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:45:48 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:22:27 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 2
#define CMP_CHECK memcmp(real_return, test_return, SIZE)

// 1) Basic test;
static int	test_1(){
	int SIZE = 15;
	char real_return[15] = "Hello World...";
	char test_return[15] = "Hello World...";

	bzero(real_return, SIZE);
	ft_bzero(test_return ,SIZE);

	if(CMP_CHECK != 0) return (KO);
	return (OK);
}

// 2) NULL arrays;
static int	test_2(){
	int SIZE = 15;
	char real_return[15];
	char test_return[15];

	bzero(real_return, SIZE);
	ft_bzero(test_return ,SIZE);

	if(CMP_CHECK != 0) return (KO);
	return (OK);
}

void		test_bzero(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}