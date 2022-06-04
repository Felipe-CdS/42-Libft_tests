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

static int	test_1(){
	char *entry, real_return[15], test_return[15];

	entry = "Hello World...";
	strcpy(real_return, entry);
	strcpy(test_return, entry);	

	bzero(real_return, 10);
	ft_bzero(test_return ,10);

	if(strcmp(real_return, test_return) != 0) return (KO);

	return (OK);
}

static int	test_2(){
	return (ND);
}

void		test_bzero(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}