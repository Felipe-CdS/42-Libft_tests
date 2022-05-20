/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:45:48 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 16:46:53 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void	test_bzero()
{
	char	or[15]	= "Hello World...";
	char	ft[15]	= "Hello World...";

	write(1, "\n>or_bzero()\tbefore: ", 22);
	print_char_n_null(or, sizeof(or));

	bzero(or, 10);

	write(1, " | After: ", 11);
	print_char_n_null(or, sizeof(or));

	write(1, "\n>ft_bzero()\tbefore: ", 22);
	print_char_n_null(ft, sizeof(ft));

	ft_bzero(ft, 10);

	write(1, " | After: ", 11);
	print_char_n_null(ft, sizeof(ft));
	write(1, "\n", 1);
}
