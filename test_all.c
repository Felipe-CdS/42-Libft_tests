/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:47:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 14:06:32 by fcoutinh         ###   ########.fr       */
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
	if(!tests_quant) printf(YEL "[NOT IMPLEMENTED YET]" RESET);
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

	printf("\t> Test 24) ft_substr:\t\t");
	test_substr();
	
	printf("\t> Test 25) ft_strjoin:\t\t");
	test_strjoin();

	printf("\t> Test 26) ft_strtrim:\t\t");
	test_strtrim();

	printf("\t> Test 27) ft_split:\t\t");
	test_split();

	printf("\t> Test 28) ft_itoa:\t\t");
	test_itoa();

	printf("\t> Test 29) ft_strmapi:\t\t");
	test_strmapi();

	printf("\t> Test 30) ft_striteri:\t\t");
	test_striteri();

	printf("\t> Test 31) ft_putchar_fd:\t");
	test_putchar_fd();
	
	printf("\t> Test 32) ft_putstr_fd:\t");
	test_putstr_fd();
	
	printf("\t> Test 33) ft_putendl_fd:\t");
	test_putendl_fd();

	printf("\t> Test 34) ft_putnbr_fd:\t");
	test_putnbr_fd();

	printf("+-----------------------------------------------------------------------+\n");
	printf("|\t\t\t\tBonus Tests\t\t\t\t|\n");
	printf("+-----------------------------------------------------------------------+\n");

	printf("\t> Test 35) ft_lstnew:\t\t");
	test_lstnew();

	printf("\t> Test 36) ft_lstadd_front:\t");
	test_lstadd_front();

	printf("\t> Test 37) ft_lstsize:\t\t");
	test_lstsize();

	printf("\t> Test 38) ft_lstlast:\t\t");
	test_lstlast();

	printf("\t> Test 39) ft_lstadd_back:\t");
	test_lstadd_back();

	printf("\t> Test 40) ft_lstdelone:\t");
	test_lstdelone();

	printf("\t> Test 41) ft_lstclear:\t\t");
	test_lstclear();

	printf("+-----------------------------------------------------------------------+\n");
}
