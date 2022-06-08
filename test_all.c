/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/08 12:18:08 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

void	printnmem(void *s, size_t n)
{
	char *tc_s;
	unsigned int i;
	
	tc_s = (char *) s;
	i = 0;
	while (i < n)
	{
		char x = tc_s[i];
		printf("%d ", x);	
		i++;
	}
}

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
	
	printf("\t> Test 01) ft_isalpha:\t\t");
	test_isalpha();

	printf("\t> Test 02) ft_isdigit:\t\t");
	test_isdigit();

	printf("\t> Test 03) ft_isalnum:\t\t");
	test_isalnum();

	printf("\t> Test 04) ft_isascii:\t\t");
	test_isascii();

	printf("\t> Test 05) ft_isprint:\t\t");
	test_isprint();

	printf("\t> Test 06) ft_strlen:\t\t");
	test_strlen();

	printf("\t> Test 07) ft_memset:\t\t");
	test_memset();

	printf("\t> Test 08) ft_bzero:\t\t");
	test_bzero();

	printf("\t> Test 09) ft_memcpy:\t\t");
	test_memcpy();

	printf("\t> Test 10) ft_memmove:\t\t");
	test_memmove();

	printf("\t> Test 11) ft_strlcpy:\t\t");
	test_strlcpy();

	printf("\t> Test 12) ft_strlcat:\t\t");
	test_strlcat();

	printf("\t> Test 13) ft_toupper:\t\t");
	test_toupper();

	printf("\t> Test 14) ft_tolower:\t\t");
	test_tolower();

	printf("\t> Test 15) ft_strchr:\t\t");
	test_strchr();

	printf("\t> Test 16) ft_strrchr:\t\t");
	test_strrchr();

	printf("\t> Test 17) ft_strncmp:\t\t");
	test_strncmp();

	printf("\t> Test 18) ft_memchr:\t\t");
	test_memchr();

	printf("\t> Test 19) ft_memcmp:\t\t");
	test_memcmp();

	printf("\t> Test 20) ft_strnstr:\t\t");
	test_strnstr();

	printf("\t> Test 21) ft_atoi:\t\t");
	test_atoi();

	printf("\t> Test 22) ft_calloc:\t\t");
	test_calloc();

	printf("\t> Test 23) ft_strdup:\t\t");
	test_strdup();

	printf("+-----------------------------------------------------------------------+\n");

	printf("\t> Test XX) ft_itoa:\t\t");
	test_itoa();

	printf("\t> Test XX) ft_putchar_fd:\t");
	test_putchar_fd();
	
	printf("\t> Test XX) ft_putstr_fd:\t");
	test_putstr_fd();
	
	printf("\t> Test XX) ft_putendl_fd:\t");
	test_putendl_fd();

	printf("\t> Test XX) ft_putnbr_fd:\t");
	test_putnbr_fd();

	// printf("|\t> Test 23) ft_substr:\t\t");
	// test_single(&test_substr);
	// printf("\t\t\t\t|\n");
	
	// printf("|\t> Test 24) ft_strjoin:\t\t");
	// test_single(&test_strjoin);
	// printf("\t\t\t\t|\n");
	
	printf("+-----------------------------------------------------------------------+\n");
}
