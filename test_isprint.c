/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:21:47 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:23:39 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int test_isprint()
{
	int i;
	int real_return;
	int test_return;

	for(i = -5; i < 130; ++i){
		if(isprint(i)) real_return = 1;
		else real_return = 0;
		if(ft_isprint(i)) test_return = 1;
		else test_return = 0;
		if(test_return ^ real_return) return (i); //XOR operator
	};
	return (0);
}
