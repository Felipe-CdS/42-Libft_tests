/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:52:04 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 15:54:25 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 8

#define CHECK_COND strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size)

// equal entries && full size
static int	test_1(){		

	char *entry1 = "abcde12345";
	char *entry2 = "abcde12345";
	size_t	size = ft_strlen(entry1);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// equal entries && random size < full size
static int	test_2(){
	char *entry1 = "abcde12345";
	char *entry2 = "abcde12345";
	size_t	size = 6;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// equal entries && random size > full size
static int	test_3(){	
	char *entry1 = "abcde12345";
	char *entry2 = "abcde12345";
	size_t	size = 100;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// equal entries && size <= 0
static int	test_4(){
	char *entry1 = "abcde12345";
	char *entry2 = "abcde12345";
	size_t	size = -123;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// different entries && same size
static int	test_5(){		
	char *entry1	= "abcde12345";
	char *entry2	= "fghij67890";
	size_t	size	= ft_strlen(entry1);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// different entries && size < difference point
static int	test_6(){		
	char *entry1	= "abcde12345";
	char *entry2	= "abcde12340";
	size_t	size	= 2;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// empty entries && size > 0
static int	test_7(){		
	char *entry1	= "";
	char *entry2	= "";
	size_t	size	= 10;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// entries with non-printable chars && any size
static int	test_8(){		
	char entry1[100]	= {'H', 'e', 'l', 'l', 'o', 1, 2, 3, '\0'};
	char *entry2		= "Hello";
	size_t	size		= ft_strlen(entry1);
	if(CHECK_COND)	return (KO);
	return (OK);
}

void	test_strncmp(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8};
	tests_iterator(f_ptr, TESTS_QUANT);
}
