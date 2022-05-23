/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:18:20 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:31 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int test_strlen()
{
	char *entry;
	char not_print_test[100] = {'1', 'a', '\2', '\1', '\0'};
	char null_test[100];

	entry = "abcde12345";
	if(strlen(entry) != ft_strlen(entry)) return (1);

	entry = "a b c 1 2 3";
	if(strlen(entry) != ft_strlen(entry)) return (2);

	entry = "* - + ! | @";
	if(strlen(entry) != ft_strlen(entry)) return (3);

	entry = "";
	if(strlen(entry) != ft_strlen(entry)) return (4);

	//Special Cases:
	if(strlen(not_print_test)	!= ft_strlen(not_print_test)) 	return (5);
	if(strlen(null_test)		!= ft_strlen(null_test)) 		return (6);
	
	return (0);
}

