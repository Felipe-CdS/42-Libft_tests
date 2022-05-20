/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:17:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 17:30:02 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void test_atoi()
{
	printf("\n> ft_atoi() tests: \n");
	printf("atoi(\"12345\")		return > %d\n",	atoi("12345"));
	printf("atoi(\"-5432\")		return > %d\n",	atoi("-5432"));
	printf("atoi(\"+5432\")		return > %d\n",	atoi("+5432"));
	printf("atoi(\"-+5432\")		return > %d\n",	atoi("-+5432"));
	printf("atoi(\"123abcd\")		return > %d\n",	atoi("123abcd"));
	printf("atoi(\"ab123cd\")		return > %d\n",	atoi("ab123cd"));
	printf("atoi(\"abcd\")		return > %d\n",	atoi("abcd"));
	printf("atoi(\"-\")		return > %d\n",	atoi("-"));
	printf("atoi(\"\")		return > %d\n",	atoi(""));

	printf("\n");

	printf("ft_atoi(\"12345\")	return > %d\n",	ft_atoi("12345"));
	printf("ft_atoi(\"-5432\")	return > %d\n",	ft_atoi("-5432"));
	printf("ft_atoi(\"+5432\")	return > %d\n",	ft_atoi("+5432"));
	printf("ft_atoi(\"-+5432\")	return > %d\n",	ft_atoi("-+5432"));
	printf("ft_atoi(\"123abcd\")	return > %d\n",ft_atoi("123abcd"));
	printf("ft_atoi(\"ab123cd\")	return > %d\n",	ft_atoi("ab123cd"));
	printf("ft_atoi(\"abcd\")		return > %d\n",	ft_atoi("abcd"));
	printf("ft_atoi(\"-\")		return > %d\n",	ft_atoi("-"));
	printf("ft_atoi(\"\")		return > %d\n",	ft_atoi(""));

	printf("\n");
	printf("####################################################\n");
}
