/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:55:49 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:13 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 1

static int	test_1(){
	const int	size = 10;
	char		real_return[15] = "Hello World...";
	char		test_return[15] = "Hello World...";

	memset(real_return, 'A', size);
	ft_memset(test_return, 'A' ,size);

	if(strcmp(real_return, test_return) != 0) return (KO);

	return (OK);
}

void		test_memset(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1};
	tests_iterator(f_ptr, TESTS_QUANT);
}
