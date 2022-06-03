/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:09:28 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 15:28:26 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

int test_strjoin()
{
	char	s1[100];
	char	s2[100];	
	char	*dst;

	// 1) Basic test
	ft_strlcpy(s1, "Hello ", 7);
	ft_strlcpy(s2, "World", 6);
	dst = ft_strjoin(s1, s2);
	if(strcmp(dst, "Hello World"))	return (1);

	// > Reset
	ft_bzero(s1, 100);
	ft_bzero(s2, 100);	
	free(dst);
		
	// 1) Empty entries
	ft_strlcpy(s1, "", 0);
	ft_strlcpy(s2, "Hello ", 6);
	dst = ft_strjoin(s1, s2);
	printf("%s\n", dst);
	if(strcmp(dst, "Hello "))		return (2);

	/*
	// 2) Empty src
	src = "";
	dst = ft_substr(src, 0,	6);
	if(dst != NULL)				return (2);
	free(dst);
	
	// 3) len = 0
	src = "Hello World";
	dst = ft_substr(src, 6,	0);
	if(dst != NULL)				return (3);
	free(dst);

	// 4) max len > src size
	src = "Hello World";
	dst = ft_substr(src, 6,	100);
	if(strcmp(dst, "World"))	return (4);
	free(dst);
	*/
	return (0);
}

