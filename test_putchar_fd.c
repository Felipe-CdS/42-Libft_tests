/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 09:28:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 11:25:57 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

static int	test_1(){
	char	test_char[1];
	char	real_char[1];
	FILE	*test_fp;
	FILE	*real_fp;

	real_fp= fopen(".fd_R1", "rw+t");
	test_fp= fopen(".fd_T1", "rw+t");

	// Test exec	
	write(10, "c", 1);
	ft_putchar_fd('c', 11);

	// test check
	fread(&real_char, sizeof(char), 1, real_fp);
	fread(&test_char, sizeof(char), 1, test_fp);

	fclose(test_fp);
	fclose(real_fp);
	
	if(ft_strncmp(test_char, real_char, 1) != 0) return (KO);
	return (OK);
}

void		test_putchar_fd(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}
