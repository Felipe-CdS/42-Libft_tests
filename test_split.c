/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:15:21 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 12:05:28 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 3

static int	test_1(){
	int		i = 0;
	char 	*entry = "Hello World. Hello World!";
	char 	*real[100] = {"Hello", "World.", "Hello", "World!", NULL};
	char 	**test;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(!real[i] || !test[i]) return (KO);
		if(strcmp(real[i], test[i]) != 0) return (KO);
		i++;
	}
	return (OK);
}

static int	test_2(){
	int		i = 0;
	char 	*entry = "HelloWorld!";
	char 	*real[100] = {"HelloWorld!", NULL};
	char 	**test;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(!real[i] || !test[i]) return (KO);
		if(strcmp(real[i], test[i]) != 0) return (KO);
		i++;
	}
	return (OK);
}

static int	test_3(){
	int		i = 0;
	char 	*entry = "";
	char 	*real[100] = {NULL};
	char 	**test;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(!real[i] || !test[i]) return (KO);
		if(strcmp(real[i], test[i]) != 0) return (KO);
		i++;
	}
	return (OK);
}

void		test_split(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

