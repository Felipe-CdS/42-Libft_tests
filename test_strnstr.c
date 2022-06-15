/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:21:01 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 16:26:12 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 9

#define CHECK_COND ft_strnstr(haystack, needle, size) != strnstr(haystack, needle, size)

// Successful find at start of string
static int	test_1(){
	char *haystack	= "Hello World";
	char *needle	= "Hello";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Successful find in middle of string
static int	test_2(){		
	char *haystack	= "Hello World";
	char *needle	= "World";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Successful find in end of string
static int	test_3(){		
	char *haystack	= "Hello World";
	char *needle	= "d";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Look alike entries
static int	test_4(){		
	char *haystack	= "thought though tough through thorough throughout";
	char *needle		= "throughout";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Empty needle
static int	test_5(){		
	char *haystack	= "thought though tough through thorough throughout";
	char *needle	= "";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Both empty
static int	test_6(){		
	char *haystack	= "";
	char *needle	= "";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Unsuccessful search
static int	test_7(){
	char *haystack	= "Hello World";
	char *needle	= "Abc";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Needle bigger than haystack
static int	test_8(){
	char *haystack	= "Hello";
	char *needle	= "Hello World";
	size_t	size	= ft_strlen(haystack);
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Size in the middle of needle
static int	test_9(){
	char *haystack	= "Hello World";
	char *needle	= "World";
	size_t	size	= 10;
	if(CHECK_COND)	return (KO);
	return (OK);
}


void	test_strnstr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8, &test_9 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
