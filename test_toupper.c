/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:38:16 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 14:06:12 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

void test_toupper()
{
	char x[10];
	printf("\n ft_toupper() tests: \n");
	for(int i = 32; i < 128; ++i) printf("%c", i); 
	printf(" \n");
	for(int i = 32; i < 128; ++i) printf("%c", toupper(i));
	printf("\n");
	for(int i = 32; i < 128; ++i) printf("%c", ft_toupper(i));
	printf("\n");
}
