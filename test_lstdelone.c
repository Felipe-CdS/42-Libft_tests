/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:00:37 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 14:01:22 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

static int	test_1(){
	return (ND);
}

void		test_lstdelone(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1 };
	tests_iterator(f_ptr, TESTS_QUANT);
}


