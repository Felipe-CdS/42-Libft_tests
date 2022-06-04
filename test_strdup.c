/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:10:35 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/04 19:10:37 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

static int	test_1(){
	return (ND);
}

void	test_strdup(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1};
	tests_iterator(f_ptr, TESTS_QUANT);
}
