/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 09:27:41 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/06 12:00:48 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

static int	test_1(){
	char	test_str[13];
	char	real_str[13];
	FILE	*test_fp;
	FILE	*real_fp;

	real_fp= fopen(".fd_R3", "rw+t");
	test_fp= fopen(".fd_T3", "rw+t");

	// Test exec	
	write(14, "Hello World", 12); write(14, "\n", 1);
	ft_putendl_fd("Hello World", 15);

	// test check
	fread(real_str, sizeof(char), 13, real_fp);
	fread(test_str, sizeof(char), 13, test_fp);

	fclose(test_fp);
	fclose(real_fp);
	
	// printnmem(test_str, 13); // debug print
	// printnmem(real_str, 13); // debug print

	if(ft_memcmp(test_str, real_str, 13) != 1) return (KO);
	return (OK);
}

void		test_putnbr_fd(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}
