/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:54:18 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 15:28:16 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 3

static int	test_1(){
	int size, test_result = OK;
	char	*buffer = NULL;
	unsigned long i;

	i = 0;
	size = 10;
	buffer = (char *) ft_calloc(size, sizeof(char));
	if(!buffer) test_result = KO;
	while(i < size * sizeof(int))
	{
		if(buffer[i] != '\0') test_result = KO;
		i++;
	}
	free(buffer);
	return (test_result);
}

static int	test_2(){
	int size, test_result = OK;
	char	*buffer = NULL;
	unsigned long i;

	i = 0;
	size = 10;
	buffer = (char *) ft_calloc(size, sizeof(int));
	if(!buffer) test_result = KO;
	while(i < size * sizeof(int))
	{
		if(buffer[i] != '\0') test_result = KO;
		i++;
	}
	free(buffer);
	return (test_result);
}

static int	test_3(){
	int size, test_result = OK;
	char	*buffer = NULL;
	unsigned long i;

	i = 0;
	size = 0;
	buffer = (char *) ft_calloc(size, sizeof(int));
	if(!buffer) test_result = KO;
	while(i < size * sizeof(int))
	{
		if(buffer[i] != '\0') test_result = KO;
		i++;
	}
	free(buffer);
	return (test_result);
}

void	test_calloc(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3};
	tests_iterator(f_ptr, TESTS_QUANT);
}
