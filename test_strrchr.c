/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:31:49 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 12:03:33 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 7

#define CHECK_COND strrchr(entry, search) != ft_strrchr(entry, search)

// Char at first index
static int	test_1(){		
	char	*entry = "abcde12345";
	char	search = 'a';
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Char at random index
static int	test_2(){		
	char	*entry = "abcde12345";
	char	search = '2';
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Char at last index
static int	test_3(){		
	char	*entry = "abcde12345";
	char	search = '5';
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Char is a space
static int	test_4(){		
	char	*entry = "a b c 1 2 3";
	char	search = ' ';
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Char is a space
static int	test_5(){		
	char	entry[100]	= {'1', 'a', '\2', '\1', '\0'};
	char	search		= 1;
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Char isn't at src
static int	test_6(){		
	char	*entry	= "* - + ! | @";
	char	search	= 'a';
	if(CHECK_COND)	return (KO);
	return (OK);
}

// Src is empty
static int	test_7(){		
	char	*entry	= "";
	char	search	= 'a';
	if(CHECK_COND)	return (KO);
	return (OK);
}

void	test_strrchr(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7};
	tests_iterator(f_ptr, TESTS_QUANT);
}