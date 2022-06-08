/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 09:27:41 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 14:37:53 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 2

static int	test_1(){
	int entry;
	int result;
	char file_str[100];
	FILE *test_fp;

	entry = 1234;
	test_fp = fopen(".fd_T4", "rw+t");
	ft_putnbr_fd(entry, 16);

	// Test check
	fread(file_str, sizeof(char), 5, test_fp);
	result = ft_atoi(file_str);

	fclose(test_fp);

	if(entry != result) return (KO);
	return (OK);
}

static int	test_2(){
	int entry;
	int result;
	char file_str[100];
	FILE *test_fp;

	entry = INT_MIN;
	test_fp = fopen(".fd_T5", "rw+t");
	ft_putnbr_fd(entry, 17);

	// Test check
	fread(file_str, sizeof(char), 20, test_fp);
	result = ft_atoi(file_str);

	fclose(test_fp);

	if(entry != result) return (KO);
	return (OK);
}
void		test_putnbr_fd(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
