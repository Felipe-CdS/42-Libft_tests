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
	unsigned long i;
	int 	size;	
	char	*buffer;

	i = 0;
	size = 10;
	buffer = (char *) ft_calloc(size, sizeof(char));
	while(i < size * sizeof(char))
	{
		if(buffer[i] != '\0') return (KO);
		i++;
	}
	return (OK);
}

static int	test_2(){
	unsigned long i;
	int 	size;	
	char	*buffer;

	i = 0;
	size = 10;
	buffer = (char *) ft_calloc(size, sizeof(int));
	while(i < size * sizeof(int))
	{
		if(buffer[i] != '\0') return (KO);
		i++;
	}
	return (OK);
}

static int	test_3(){
	unsigned long i;
	int 	size;	
	char	*buffer;

	i = 0;
	size = 0;
	buffer = (char *) ft_calloc(size, sizeof(int));
	while(i < size * sizeof(int))
	{
		if(buffer[i] != '\0') return (KO);
		i++;
	}
	return (OK);
}
void	test_calloc(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3};
	tests_iterator(f_ptr, TESTS_QUANT);
}
