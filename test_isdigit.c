/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:34:11 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:23:28 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int	test_isdigit()
{
	int i;
	int real_return;
	int test_return;

	for(i = 0; i < 128; ++i){
		if(isdigit(i)) real_return = 1;
		else real_return = 0;
		if(ft_isdigit(i)) test_return = 1;
		else test_return = 0;
		if(test_return ^ real_return) return (i); //XOR operator
	};
	return (0);
}
