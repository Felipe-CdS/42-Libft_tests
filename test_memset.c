/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:55:49 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:13 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

void test_memset()
{
	char	or[15]	= "Hello World...";
	char	ft[15]	= "Hello World...";

	write(1, "\nor_memset()\tbefore: ", 22);
	print_char_n_null(or, sizeof(or));

	memset(or, 'A' ,10);

	write(1, " | After: ", 11);
	print_char_n_null(or, sizeof(or));
	write(1, "\n", 1);

	write(1, "ft_memset()\tbefore: ", 21);
	print_char_n_null(ft, sizeof(ft));

	ft_memset(ft, 'A', 10);

	write(1, " | After: ", 11);
	print_char_n_null(ft, sizeof(ft));
	write(1, "\n", 1);
}
