/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:23:07 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 15:12:54 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

static char test_function(unsigned int index,  char char_ptr)
{
	(void) index;
	(void) char_ptr;

	return 'a';
}

static int	test_1(){
	char entry[100]		= "Hello World!";
	char *real_result	= "aaaaaaaaaaaa";	 
	char *test_return;

	test_return = ft_strmapi(entry, &test_function);
	if(strcmp(real_result, test_return) != 0) return (KO);
	return (OK);
}

void		test_strmapi(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

