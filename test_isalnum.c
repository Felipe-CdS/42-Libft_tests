/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:19:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 17:28:28 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void test_isalnum()
{
	printf("\n> isalnum() tests\n");
	for(int i = -5;  i < 32;  ++i) printf(" "); 
	for(int i = 32;  i < 128; ++i) printf("%c", i); 
	for(int i = 128; i < 130; ++i) printf(" "); 


	printf(" \n");
	for(int i = -5; i < 130; ++i) printf("%d", isalnum(i));
	printf("\n");
	for(int i = -5; i < 130; ++i) printf("%d", ft_isalnum(i));
	printf("\n\n");
	printf("####################################################\n");
}


