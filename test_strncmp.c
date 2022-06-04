/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:52:04 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 13:56:25 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 7

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

// Char is a space
static int	test_5(){		
	return (ND);
}

// Char isn't at src
static int	test_6(){		
	return (ND);
}

// Src is empty
static int	test_7(){		
	return (ND);
}

void	test_strncmp(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}

// int	test_strncmp()
// {
	// char		*entry1;
	// char		*entry2;
	// char		spc_c1[100] = {'H', 'e', 'l', 'l', 'o', '\1', '\2', '\3', '\0'};
	// char		spc_c2[100];
	// unsigned int	size;

	// // equal entries && random size > full size
	// entry1	= "abcde12345";
	// entry2	= "abcde12345";
	// size	= 100;
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (3);

	// // equal entries && size <= 0
	// entry1	= "abcde12345";
	// entry2	= "abcde12345";
	// size	= -123;
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (4);

	// // different entries && same size
	// entry1	= "abcde12345";
	// entry2	= "fghij67890";
	// size	= ft_strlen(entry1);
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (5);

	// // different entries && size < difference point
	// entry1	= "abcde12345";
	// entry2	= "abcde12340";
	// size	= 2;
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (6);

	// // different entries && size > difference point
	// entry1	= "abcde12345";
	// entry2	= "abcde12340";
	// size	= 100;
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (7);

	// // empty entries && size > 0
	// entry1	= "";
	// entry2	= "";
	// size	= 10;
	// if(strncmp(entry1, entry2, size) != ft_strncmp(entry1, entry2, size))	return (8);

	// // entries with non-printable chars && any size
	// //spc_c1 = {'H', 'e', 'l', 'l', 'o', 1, 2, 3, '\0'};
	// entry2	 = "Hello";
	// size	= ft_strlen(spc_c1);
	// if(strncmp(spc_c1, entry2, size) != ft_strncmp(spc_c1, entry2, size))	return (9);

// 	return (0);
// }
