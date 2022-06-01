/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 09:06:20 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

void	test_all()
{
	printf("\n+-------------------------------------------------------+\n");
	printf("|\t\t\tLibft Tests\t\t\t|\n");
	printf("+-------------------------------------------------------+\n");
	
	printf("|\t\t> Test 01) ft_isalpha:\t");
	test_single(&test_isalpha);
	printf("\t\t|\n");

	printf("|\t\t> Test 02) ft_isdigit:\t");
	test_single(&test_isdigit);
	printf("\t\t|\n");

	printf("|\t\t> Test 03) ft_isalnum:\t");
	test_single(&test_isalnum);
	printf("\t\t|\n");

	printf("|\t\t> Test 04) ft_isascii:\t");
	test_single(&test_isascii);
	printf("\t\t|\n");

	printf("|\t\t> Test 05) ft_isprint:\t");
	test_single(&test_isprint);
	printf("\t\t|\n");

	printf("|\t\t> Test 06) ft_strlen:\t");
	test_single(&test_strlen);
	printf("\t\t|\n");

	printf("|\t\t> Test 07) ft_memset:\t");
	test_single(&test_memset);
	printf("\t\t|\n");

	printf("|\t\t> Test 08) ft_bzero:\t");
	test_single(&test_bzero);
	printf("\t\t|\n");

	printf("|\t\t> Test 09) ft_memcpy:\t");
	test_single(&test_memcpy);
	printf("\t\t|\n");

	printf("|\t\t> Test 10) ft_toupper:\t");
	test_single(&test_toupper);
	printf("\t\t|\n");

	printf("|\t\t> Test 11) ft_tolower:\t");
	test_single(&test_tolower);
	printf("\t\t|\n");

	printf("|\t\t> Test 12) ft_strchr:\t");
	test_single(&test_strchr);
	printf("\t\t|\n");

	printf("|\t\t> Test 13) ft_strrchr:\t");
	test_single(&test_strrchr);
	printf("\t\t|\n");

	printf("|\t\t> Test 14) ft_strncmp:\t");
	test_single(&test_strncmp);
	printf("\t\t|\n");

	printf("|\t\t> Test 15) ft_memchr:\t");
	test_single(&test_memchr);
	printf("\t\t|\n");

	printf("|\t\t> Test 16) ft_memcmp:\t");
	test_single(&test_memcmp);
	printf("\t\t|\n");

	printf("|\t\t> Test 17) ft_strnstr:\t");
	test_single(&test_strnstr);
	printf("\t\t|\n");

	printf("|\t\t> Test 18) ft_atoi:\t");
	test_single(&test_atoi);
	printf("\t\t|\n");



	printf("+-------------------------------------------------------+\n");
}

