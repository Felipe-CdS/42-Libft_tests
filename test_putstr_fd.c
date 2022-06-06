/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 09:26:52 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 11:56:40 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

static int	test_1(){
	char	test_str[12];
	char	real_str[12];
	FILE	*test_fp;
	FILE	*real_fp;

	real_fp= fopen(".fd_R2", "rw+t");
	test_fp= fopen(".fd_T2", "rw+t");

	// Test exec	
	write(12, "Hello World", 12);
	ft_putstr_fd("Hello World", 13);

	// test check
	fread(real_str, sizeof(char), 12, real_fp);
	fread(test_str, sizeof(char), 12, test_fp);

	fclose(test_fp);
	fclose(real_fp);

	// printnmem(test_str, 12); // debug print
	// printnmem(real_str, 12); // debug print

	if(ft_strncmp(test_str, real_str, 1) != 0) return (KO);
	return (OK);
}

void		test_putstr_fd(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}
