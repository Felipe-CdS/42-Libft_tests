/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:53:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 17:57:00 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

void test_tolower()
{
	char x[10];
	printf("\n ft_tolower() tests: \n");
	for(int i = 32; i < 128; ++i) printf("%c", i); 
	printf(" \n");
	for(int i = 32; i < 128; ++i) printf("%c", tolower(i));
	printf("\n");
	for(int i = 32; i < 128; ++i) printf("%c", ft_tolower(i));
	printf("\n");
}
