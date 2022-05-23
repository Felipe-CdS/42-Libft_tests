/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:19:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:22:51 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int test_isalnum()
{
	int i;
	int real_return;
	int test_return;

	for(i = 0; i < 128; ++i){
		if(isalnum(i)) real_return = 1;
		else real_return = 0;
		if(ft_isalnum(i)) test_return = 1;
		else test_return = 0;
		if(test_return ^ real_return) return (i); //XOR operator
	};
	return (0);
}


