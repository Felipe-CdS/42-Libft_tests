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
	int		i = 0, test_result = OK;
	char 	*entry = "Hello World. Hello World!";
	char 	*real[100] = {"Hello", "World.", "Hello", "World!", NULL};
	char 	**test = NULL;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(strcmp(real[i], test[i]) != 0) test_result = KO;
		i++;
	}

	i = 0;
	while(test[i])
	{
		free(test[i]);
		i++;
	}
	free(test);	
	return (test_result);
}

static int	test_2(){
	int		i = 0, test_result = OK;
	char 	*entry = "HelloWorld!";
	char 	*real[100] = {"HelloWorld!", NULL};
	char 	**test = NULL;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(strcmp(real[i], test[i]) != 0) test_result = KO;
		i++;
	}

	i = 0;
	while(test[i])
	{
		free(test[i]);
		i++;
	}
	free(test);	
	return (test_result);
}

static int	test_3(){
	int		i = 0, test_result = OK;
	char 	*entry = "";
	char 	*real[100] = {NULL};
	char 	**test = NULL;

	test = ft_split(entry, ' ');
	while(real[i] || test[i])
	{
		if(strcmp(real[i], test[i]) != 0) test_result = KO;
		i++;
	}
	
	i = 0;
	while(test[i])
	{
		free(test[i]);
		i++;
	}
	free(test);	
	return (test_result);
}

void		test_split(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2, &test_3 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

