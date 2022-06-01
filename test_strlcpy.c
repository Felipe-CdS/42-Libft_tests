/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:33:36 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 12:34:22 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

int	test_strlcpy(){

	char		*src;
	char		real_dst[100];
	char		test_dst[100];
	char		sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	char		sp_c2[100];
	char 		*sp_c3 = "Hello Everybody";
	size_t		real_ret;
	size_t		test_ret;

	// Basic test
	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (1);

	// Truncate string
	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) - 3);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) - 3);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (2);

	// Empty Entry
	src	= "";
	real_ret = strlcpy(real_dst, 		src,	ft_strlen(src) + 1);
	test_ret = ft_strlcpy(test_dst, 	src,	ft_strlen(src) + 1);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (3);

	// len == 0
	src	= "";
	real_ret = strlcpy(real_dst, 		src,	0);
	test_ret = ft_strlcpy(test_dst, 	src,	0);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (4);

	// len too big for src
	src	= "Hello World";
	real_ret = strlcpy(real_dst, 		src,	100);
	test_ret = ft_strlcpy(test_dst, 	src,	100);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (5);
	
	// =============
	// Special Cases
	// =============

	// non printable entry
	// sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	real_ret = strlcpy(real_dst, 		sp_c1,	ft_strlen(sp_c1) + 1);
	test_ret = ft_strlcpy(test_dst, 	sp_c1,	ft_strlen(sp_c1) + 1);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (6);

	// NULL src
	// sp_c2[100];
	real_ret = strlcpy(real_dst, 		sp_c2,	ft_strlen(sp_c2) + 1);
	test_ret = ft_strlcpy(test_dst, 	sp_c2,	ft_strlen(sp_c2) + 1);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (7);

	// non empty dst and bigger than src
	src = "Hello World";
	real_ret = strlcpy(real_dst, 		sp_c3,	ft_strlen(sp_c3) + 1);
	test_ret = ft_strlcpy(test_dst, 	sp_c3,	ft_strlen(sp_c3) + 1);
	if(ft_strncmp(real_dst, test_dst, ft_strlen(real_dst)) || real_ret != test_ret)	return (8);
	
	return (0);
}
