/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:00:25 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 14:57:52 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int test_substr()
{
	char	*src;
	char	*dst;

	// 1) Basic test
	src	= "Hello World";
	dst = ft_substr(src, 6,	5);
	if(strcmp(dst, "World"))	return (1);
	free(dst);
		
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

	return (0);
}

