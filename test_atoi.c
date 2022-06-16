/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:17:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 15:41:49 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 11

// Basic negative entry 
static int	test_1(){
	char *entry = "-12345";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Positive entry with +
static int	test_2(){		
	char *entry = "+12345";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Float entry
static int	test_3(){		
	char *entry = "12345.6789";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with numbers and letters
static int	test_4(){		
	char *entry = "12345abcd";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with letters and numbers
static int	test_5(){		
	char *entry = "abcd12345";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with just letters
static int	test_6(){		
	char *entry = "abcd";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with two signs
static int	test_7(){
	char *entry = "-+12345";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Empty entry
static int	test_8(){
	char entry[100] = {'\0'};
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with spaces
static int	test_9(){
	char *entry = "054854";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}

// Entry with nonprintable
static int	test_10(){
	char *entry = "\t\v\f\r\n \f-06050";
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}


// Entry with nonprintable
static int	test_11(){
	char entry[100] = {'\t', ' ', '\1', '1', '2', '\0'};
	if(atoi(entry) != ft_atoi(entry))	return (KO);
	return (OK);
}
void	test_atoi(){	
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6, &test_7, &test_8, &test_9, &test_10, &test_11 };
	tests_iterator(f_ptr, TESTS_QUANT);
}
