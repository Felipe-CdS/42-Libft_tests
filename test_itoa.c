/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:14:31 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 13:50:49 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 3

static int	test_1(){
	int start_x;
	char *str_x;
	int	result_x;

	start_x = -1000000;

	while (start_x < 1000000)
	{
		str_x = ft_itoa(start_x);
		result_x = ft_atoi(str_x);
		if(start_x != result_x) return (KO);
		start_x++;
	}

	return (OK);
}

static int	test_2(){
	int start_x;
	char *str_x;
	int	result_x;

	start_x = INT_MIN;
	str_x = ft_itoa(start_x);
	result_x = ft_atoi(str_x);

	if(start_x != result_x) return (KO);
	return (OK);
}

static int	test_3(){
	int start_x;
	char *str_x;
	int	result_x;

	start_x = INT_MAX;
	str_x = ft_itoa(start_x);
	result_x = ft_atoi(str_x);

	if(start_x != result_x) return (KO);
	return (OK);
}

void		test_itoa(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
