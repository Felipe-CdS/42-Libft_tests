/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:16:40 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:23:13 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

static int	test_1(void){
	int i;
	int real_return;
	int test_return;

	for(i = 0; i < 128; ++i){
		if(isalpha(i)) real_return = 1;
		else real_return = 0;
		if(ft_isalpha(i)) test_return = 1;
		else test_return = 0;
		if(test_return ^ real_return) return (KO); //XOR operator
	};
	
	return (OK);
}

void	test_isalpha(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}