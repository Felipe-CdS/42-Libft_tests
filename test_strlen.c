/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:18:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 17:39:52 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void test_strlen()
{
	char null_test[100];
	char x[100] = {'1', 'a', '\2', '\1', '\0'};

	printf("\n> ft_strlen() tests: \n");
	printf("strlen(\"abcde12345\")		return > %zu\n", 	strlen("abcde12345"));
	printf("strlen(\"a b c 1 2 3\")		return > %zu\n",	strlen("a b c 1 2 3"));
	printf("strlen(\"* - + ! | @\")		return > %zu\n",	strlen("* - + ! | @"));
	printf("strlen(\"1a\\2\\1\")		return > %zu\n",			strlen(x));
	printf("strlen(\"\")			return > %zu\n",			strlen(""));
	printf("strlen(NULL)			return > %zu\n",			strlen(null_test));
	printf("\n");

	printf("ft_strlen(\"abcde12345\")		return > %zu\n",	ft_strlen("abcde12345"));
	printf("ft_strlen(\"a b c 1 2 3\")	return > %zu\n",	ft_strlen("a b c 1 2 3"));
	printf("ft_strlen(\"* - + ! | @\")	return > %zu\n",	ft_strlen("* - + ! | @"));
	printf("ft_strlen(\"1a\\2\\1\")		return > %zu\n",			strlen(x));
	printf("ft_strlen(\"\")			return > %zu\n",				ft_strlen(""));
	printf("ft_strlen(NULL)			return > %zu\n",				ft_strlen(null_test));
	printf("\n");
	printf("####################################################\n");
}
