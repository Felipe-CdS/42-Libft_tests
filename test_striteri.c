/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:24:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 14:46:32 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

void		test_function(unsigned int index,  char *char_ptr)
{
	char iteration_result;

	iteration_result = ft_toupper(char_ptr[index]);
	ft_memmove(&char_ptr[index], &iteration_result, 1);
}


static int	test_1(){
	char entry[100] = "Hello World!";
	char *real		= "HELLO WORLD!";

	ft_striteri(entry, &test_function);

	if(strcmp(entry, real) != 0) return (KO);
	return (OK);
}

void		test_striteri(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

