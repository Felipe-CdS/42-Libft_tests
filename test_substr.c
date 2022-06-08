/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:00:25 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 15:18:11 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 0 

void test_substr()
{
	t_func_array f_ptr[TESTS_QUANT] = { };
	tests_iterator(f_ptr, TESTS_QUANT);

	/*
	char	*src;
	char	*dst;

	// 1) Basic test
	src	= "Hello World";
	dst = ft_substr(src, 6,	5);
	if(strcmp(dst, "World"))	return (1);
	free(dst);
		
	// 2) Empty src
	src = "";
	dst = ft_substr(src, 0,	6);
	if(dst != NULL)				return (2);
	free(dst);
	
	// 3) len = 0
	src = "Hello World";
	dst = ft_substr(src, 6,	0);
	if(dst != NULL)				return (3);
	free(dst);

	// 4) max len > src size
	src = "Hello World";
	dst = ft_substr(src, 6,	100);
	if(strcmp(dst, "World"))	return (4);
	free(dst);
	*/
}

