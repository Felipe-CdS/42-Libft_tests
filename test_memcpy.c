/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:02:24 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:01 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

void test_memcpy()
{
	const int	size = 10;
	char		or_src[15] = "Hello World...", or_dst[20] = "";
	char		ft_src[15] = "Hello World...", ft_dst[20] = "";

	write(1, "\n>or_memcpy()\tbefore: ", 23);
	print_char_n_null(or_dst, sizeof(or_dst));

	memcpy(or_dst, or_src, size);

	write(1, " | After: ", 11);
	print_char_n_null(or_dst, sizeof(or_dst));

	write(1, "\n>ft_memcpy()\tbefore: ", 23);
	print_char_n_null(ft_dst, sizeof(ft_dst));

	ft_memcpy(ft_dst, ft_src, size);

	write(1, " | After: ", 11);
	print_char_n_null(ft_dst, sizeof(ft_dst));
	write(1, "\n", 1);
}
