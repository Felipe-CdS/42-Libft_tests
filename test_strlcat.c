/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:43:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 13:35:43 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 5

// 1) Basic test
static int test_1(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s |===| %s\t", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);
	return (0);
}

// 2) Truncate string
static int test_2(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 33;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s |===| %s\t", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);
	return (0);
}

// 3) Empty Entry
static int test_3(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s |===| %s\t", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);
	return (0);
}

// 4) len == 0
static int test_4(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 0;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s|===| %s", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);
	return (0);
}

// 5) src too big
static int test_5(){
	char		*src, real_dst[100], test_dst[100];
	size_t		real_ret, test_ret, buf_size;

	// Test setup
	src	= "Hello Worldddddddddddddd";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s|===| %s", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);
	return (0);
}

int	test_strlcat(){
	int (*f_ptr[TESTS_QUANT])() = {&test_1, &test_2, &test_3, &test_4, &test_5};
	
	for(int i = 0; i < TESTS_QUANT; i++)
	{
		if((f_ptr[(i)])() == 1) 		printf(RED "[KO]" RESET);
		else if((f_ptr[(i)])() == 0) 	printf(GRN "[OK]" RESET);	
		else							printf(YEL "[NI]" RESET);	
	} 

	return (0);
}
