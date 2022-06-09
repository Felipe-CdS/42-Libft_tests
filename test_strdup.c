/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:10:35 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 12:58:48 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 2
#define CMP_CHECK ft_strncmp(real_dst, test_dst, ft_strlen(real_dst))

// Basic Test 
static int	test_1(){
	int 	result;
	char	*src;
	char	*real_dst;
	char	*test_dst;

	src = "Hello World";
	real_dst = strdup(src);
	test_dst = ft_strdup(src);

	result = CMP_CHECK;
	free(real_dst);
	free(test_dst);
	if(result != 0) return (KO);
	return (OK);
}

// Empty src
static int	test_2(){
	int 	result;
	char	*src;
	char	*real_dst;
	char	*test_dst;

	src = "";
	real_dst = strdup(src);
	test_dst = ft_strdup(src);

	result = CMP_CHECK;
	free(real_dst);
	free(test_dst);
	if(result != 0) return (KO);
	return (OK);
}

void	test_strdup(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2};
	tests_iterator(f_ptr, TESTS_QUANT);
}
