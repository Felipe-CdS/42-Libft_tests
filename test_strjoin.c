/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:09:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 15:42:35 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 3

// 1) Basic test
static int	test_1(){
	char	*s1 = "Hello ";
	char	*s2 = "World";	
	char	*dst;

	dst = ft_strjoin(s1, s2);

	if(strcmp(dst, "Hello World") != 0)	return (KO);
	return (OK);
}


// 2) Empty src
static int	test_2(){
	char	*s1 = "";
	char	*s2 = "Hello";	
	char	*dst;

	dst = ft_strjoin(s1, s2);
	if(strcmp(dst, "Hello") != 0)	return (KO);
	return (OK);
}

// 2) Both empty src
static int	test_3(){
	char	*s1 = "";
	char	*s2 = "";	
	char	*dst;

	dst = ft_strjoin(s1, s2);
	if(strcmp(dst, "") != 0)	return (KO);
	return (OK);
}


void	test_strjoin()
{
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

