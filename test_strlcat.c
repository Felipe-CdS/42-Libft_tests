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

int	test_strlcat(){

	char		*src;
	char		real_dst[100];
	char		test_dst[100];
	char		sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	char		sp_c2[100];
	char 		*sp_c3 = "Hello Everybody";
	size_t		real_ret;
	size_t		test_ret;
	size_t		buf_size;

	// 1) Basic test
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

	// 2) Truncate string
	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 33;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s |===| %s\t", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (2);

	// 3) Empty Entry
	// Test setup
	src	= "";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s |===| %s\t", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (3);

	// 4) len == 0
	// Test setup
	src	= "Hello World";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = 0;
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s|===| %s", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (4);

	// 5) src too big
	// Test setup
	src	= "Hello Worldddddddddddddd";
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s|===| %s", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (5);

	
	// 6) NULL src
	// Test setup
	// sp_c2[100];
	ft_strlcpy(real_dst, "Starting at:", 13); 
	ft_strlcpy(test_dst, "Starting at:", 13); 
	buf_size = ft_strlen(real_dst) + ft_strlen(src);
	// >Test exec
	real_ret = strlcat(real_dst, 		src,	buf_size);
	test_ret = ft_strlcat(test_dst, 	src,	buf_size);
	// printf("%zu %zu || %s|===| %s", real_ret, test_ret, real_dst, test_dst); // debug printf
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (6);

	return (0);
}
