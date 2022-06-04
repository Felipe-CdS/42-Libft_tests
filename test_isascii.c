/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:20:41 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:25:15 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 1

static int	test_1(){
	int i;
	int real_return;
	int test_return;

	for(i = 0; i < 128; ++i){
		if(isascii(i)) real_return = 1;
		else real_return = 0;
		if(ft_isascii(i)) test_return = 1;
		else test_return = 0;
		if(test_return ^ real_return) return (KO); //XOR operator
	};
	
	return (OK);
}

void		test_isascii(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}