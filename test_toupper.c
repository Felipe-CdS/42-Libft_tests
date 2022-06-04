/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:38:16 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 14:06:12 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 1

static int	test_1(){
	for(int i = 0; i < 130; ++i) if(toupper(i) != ft_toupper(i)) return (KO);
	return (OK);
}

void		test_toupper(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1};
	tests_iterator(f_ptr, TESTS_QUANT);
}