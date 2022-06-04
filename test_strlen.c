/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:18:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:31 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 5

static int	test_1(){
	char *entry = "abcde12345";
	if(strlen(entry) != ft_strlen(entry)) return (KO);	
	return (OK);
}

static int	test_2(){
	char *entry = "a b c 1 2 3";
	if(strlen(entry) != ft_strlen(entry)) return (KO);	
	return (OK);
}

static int	test_3(){
	char *entry = "* - + ! | @";
	if(strlen(entry) != ft_strlen(entry)) return (KO);	
	return (OK);
}

static int	test_4(){
	char *entry = "";
	if(strlen(entry) != ft_strlen(entry)) return (KO);	
	return (OK);
}

static int	test_5(){
	char entry[] = {'1', 'a', '\2', '\1', '\0'};
	if(strlen(entry) != ft_strlen(entry)) return (KO);	
	return (OK);
}

void		test_strlen(){	
	t_func_array f_ptr[5] = {&test_1, &test_2, &test_3, &test_4, &test_5};
	tests_iterator(f_ptr, 5);
}
