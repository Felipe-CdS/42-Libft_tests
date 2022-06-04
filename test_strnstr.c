/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:21:01 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 08:56:57 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

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

void	test_strnstr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}


// int	test_strnstr(){

// 	char	*haystack;
// 	char	*needle;

// 	// Successful find at start of string
// 	haystack	= "Hello World";
// 	needle		= "Hello";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (1);

// 	// Successful find in middle of string
// 	haystack	= "Hello World";
// 	needle		= "World";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[6])	return (2);

// 	// Successful find in end of string
// 	haystack	= "Hello World";
// 	needle		= "d";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[10])	return (3);

// 	// Look alike entries
// 	haystack	= "thought though tough through thorough throughout";
// 	needle		= "throughout";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[38])	return (4);

// 	// Empty needle
// 	haystack	= "Hello World";
// 	needle		= "";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (5);

// 	// Both empty
// 	haystack	= "";
// 	needle		= "";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (6);

// 	// Unsuccessful search
// 	haystack	= "Hello World";
// 	needle		= "Abc";
// 	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != NULL)			return (7);

// 	// Needle bigger than haystack
// 	haystack	= "Hello";
// 	needle		= "Hello World";
// 	if(ft_strnstr(haystack, needle, ft_strlen(needle)) != NULL)				return (8);
	
// 	return (0);
// }
