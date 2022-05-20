/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:16:40 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:23:13 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

void test_isalpha()
{
	printf("\n ft_isalpha() tests: \n");
	for(int i = 0; i < 32; ++i) printf(" "); 
	for(int i = 32; i < 128; ++i) printf("%c", i); 

	printf(" \n");
	for(int i = 0; i < 128; ++i) printf("%d", isalpha(i));
	printf("\n");
	for(int i = 0; i < 128; ++i) printf("%d", ft_isalpha(i));
	printf("\n\n");
	printf("####################################################\n");
}
