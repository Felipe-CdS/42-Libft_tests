/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:21:47 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 17:29:40 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void test_isprint()
{
	printf("\n> ft_isprint() tests: \n");
	for(int i = -5; i < 130; i++) printf("%d", isprint(i));
	printf("\n");
	for(int i = -5; i < 130; i++) printf("%d", ft_isprint(i));
	printf("\n\n");
	printf("####################################################\n");
}
