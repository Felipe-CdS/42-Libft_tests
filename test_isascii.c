/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:20:41 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 17:29:15 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void test_isascii()
{
	printf("\n> ft_isascii() tests: \n");
	for(int i = -5; i < 130; i++) printf("%d", isascii(i));
	printf("\n");
	for(int i = -5; i < 130; i++) printf("%d", ft_isascii(i));
	printf("\n\n");
	printf("####################################################\n");
}
