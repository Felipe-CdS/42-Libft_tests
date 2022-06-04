/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 15:07:50 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

void	tests_iterator(t_func_array *f_ptr, int tests_quant)
{
	if(!tests_quant) printf(YEL "[FUNCTION OR TESTS NOT IMPLEMENTED YET]" RESET);
	for(int i = 0; i < tests_quant; i++)
	{
		int ret = (*f_ptr[i])();
		if(ret == KO) 		printf(RED "[KO]" RESET);
		else if(ret == OK) 	printf(GRN "[OK]" RESET);	
		else				printf(YEL "[ND]" RESET);
	}
	printf("\n");
}

void	test_all()
{
	printf("+-----------------------------------------------------------------------+\n");
	printf("|\t\t\t\tLibft Tests\t\t\t\t|\n");
	printf("+-----------------------------------------------------------------------+\n");
	
	printf("\t> Test 01) ft_isalpha:\t");
	test_isalpha();

	printf("\t> Test 02) ft_isdigit:\t");
	test_isdigit();

	printf("\t> Test 03) ft_isalnum:\t");
	test_isalnum();

	printf("\t> Test 04) ft_isascii:\t");
	test_isascii();

	printf("\t> Test 05) ft_isprint:\t");
	test_isprint();

	printf("\t> Test 06) ft_strlen:\t");
	test_strlen();

	printf("\t> Test 07) ft_memset:\t");
	test_memset();

	printf("\t> Test 08) ft_bzero:\t");
	test_bzero();

	printf("\t> Test 09) ft_memcpy:\t");
	test_memcpy();

	printf("\t> Test 10) ft_memmove:\t");
	test_memmove();

	printf("\t> Test 11) ft_strlcpy:\t");
	test_strlcpy();

	printf("\t> Test 12) ft_strlcat:\t");
	test_strlcat();

	printf("\t> Test 13) ft_toupper:\t");
	test_toupper();

	printf("\t> Test 14) ft_tolower:\t");
	test_tolower();

	printf("\t> Test 15) ft_strchr:\t");
	test_strchr();

	printf("\t> Test 16) ft_strrchr:\t");
	test_strrchr();

	printf("\t> Test 17) ft_strncmp:\t");
	test_strncmp();

	printf("\t> Test 18) ft_memchr:\t");
	test_memchr();

	printf("\t> Test 19) ft_memcmp:\t");
	test_memcmp();

	printf("\t> Test 20) ft_strnstr:\t");
	test_strnstr();

	printf("\t> Test 21) ft_atoi:\t");
	test_atoi();

	printf("\t> Test 22) ft_calloc:\t");
	test_calloc();

	printf("\t> Test 23) ft_strdup:\t");
	test_strdup();

	printf("+-----------------------------------------------------------------------+\n");
	
	// printf("|\t> Test 23) ft_substr:\t");
	// test_single(&test_substr);
	// printf("\t\t\t\t|\n");
	
	// printf("|\t> Test 24) ft_strjoin:\t");
	// test_single(&test_strjoin);
	// printf("\t\t\t\t|\n");
	
	// printf("+-----------------------------------------------------------------------+\n");
}
