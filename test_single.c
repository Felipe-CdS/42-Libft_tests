/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_single.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:25:33 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 15:29:25 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

void	test_single(int (*function_ptr)(void))
{
	int test_ret;

	test_ret = (*function_ptr)();
	if(!test_ret) 	printf("[V]");
	else			printf("[Error @ Test %d]", test_ret);
}
