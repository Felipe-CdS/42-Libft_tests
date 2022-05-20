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

void	test_isdigit()
{
	printf("\n> ft_isdigit() tests: \n");
	printf("isdigit(1)	return > %d\n",	isdigit(1));
	printf("isdigit('1')	return > %d\n",	isdigit('1'));
	printf("isdigit('a')	return > %d\n",	isdigit('a'));

	printf("\n");

	printf("ft_isdigit(1)	return > %d\n",	ft_isdigit(1));
	printf("ft_isdigit('1')	return > %d\n",	ft_isdigit('1'));
	printf("ft_isdigit('a')	return > %d\n",	ft_isdigit('a'));

	printf("\n");
	printf("####################################################\n");
}
