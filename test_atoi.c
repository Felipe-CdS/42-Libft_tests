/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:17:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 09:16:44 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 7

#define CHECK_COND ft_strnstr(haystack, needle, ft_strlen(haystack)) !=

static int	test_1(){
	return (ND);
}

static int	test_2(){		
	return (ND);
}

static int	test_3(){		
	return (ND);
}

static int	test_4(){		
	return (ND);
}

static int	test_5(){		
	return (ND);
}

static int	test_6(){		
	return (ND);
}

static int	test_7(){
	return (ND);
}

void	test_atoi(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}

// int	test_atoi()
// {
// 	char *entry;
// 	// Basic positive entry
// 	entry = "12345";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (1);

// 	// Basic negative entry 
// 	entry = "-12345";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (2);

// 	// Positive entry with +
// 	entry = "+12345";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (3);

// 	// Entry with numbers and letters
// 	entry = "12345abcd";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (4);

// 	// Entry with letters and numbers
// 	entry = "abcd12345";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (5);

// 	// Entry with just letters
// 	entry = "abcd";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (6);

// 	// Entry with just a sign
// 	entry = "-";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (7);

// 	// Entry with two signs
// 	entry = "-+12345";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (8);

// 	// Empty entry
// 	entry = "";
// 	if(atoi(entry) != ft_atoi(entry)) 		return (9);

// 	return (0);
// }
