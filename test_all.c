/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 10:34:35 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

void	test_all()
{
	printf("\n============================================\n");
	printf("\t\tLibft Tests\n");
	printf("============================================\n\n");
	
	printf("> Test 01) ft_isalpha:\t");
	test_single(&test_isalpha);

	printf("> Test 02) ft_isdigit:\t");
	test_single(&test_isdigit);

	printf("> Test 03) ft_isalnum:\t");
	test_single(&test_isalnum);

	printf("> Test 04) ft_isascii:\t");
	test_single(&test_isascii);

	printf("> Test 05) ft_isprint:\t");
	test_single(&test_isprint);

	printf("> Test 06) ft_strlen:\t");
	test_single(&test_strlen);

	printf("> Test 07) ft_memset:\t");
	test_single(&test_memset);

	printf("> Test 08) ft_bzero:\t");
	test_single(&test_bzero);

	printf("> Test 09) ft_memcpy:\t");
	test_single(&test_memcpy);

	printf("> Test 10) ft_toupper:\t");
	test_single(&test_toupper);

	printf("> Test 11) ft_tolower:\t");
	test_single(&test_tolower);

	printf("> Test 12) ft_strchr:\t");
	test_single(&test_strchr);

	printf("> Test 13) ft_strrchr:\t");
	test_single(&test_strrchr);

	printf("\n============================================\n");
}

