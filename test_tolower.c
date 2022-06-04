/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:53:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 17:57:00 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 1

static int	test_1(){
	for(int i = 0; i < 130; ++i) if(tolower(i) != ft_tolower(i)) return (KO);
	return (OK);
}

void		test_tolower(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1};
	tests_iterator(f_ptr, TESTS_QUANT);
}
