/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:02:24 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:01 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 2

static int	test_1(){
	const int	size = 10;
	char 		*src = "Hello World...";
	char		real_return[15] = "";
	char		test_return[15] = "";

	memcpy(real_return, src, size);
	ft_memcpy(test_return, src, size);

	if(strcmp(real_return, test_return) != 0) return (KO);

	return (OK);
}

static int	test_2(){
	return (ND);
}

void		test_memcpy(){
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}