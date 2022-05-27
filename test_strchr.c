/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:42:27 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 10:02:32 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int	test_strchr()
{
	char *entry;
	char search;
	char not_print_test[100] = {'1', 'a', '\2', '\1', '\0'};
	char null_test[100];

	entry	= "abcde12345";
	search	= 'e';
	if(strchr(entry, search) != ft_strchr(entry, search)) return (1);

	entry	= "a b c 1 2 3";
	search	= ' ';
	if(strchr(entry, search) != ft_strchr(entry, search)) return (2);

	entry	= "* - + ! | @";
	search	= 'a'; 
	if(strchr(entry, search) != ft_strchr(entry, search)) return (3);

	entry	= "";
	search = 'a';
	if(strchr(entry, search) != ft_strchr(entry, search)) return (4);

	//Special Cases:
	if(strchr(not_print_test, 1) != ft_strchr(not_print_test, 1)) return (5);
	if(strchr(null_test, search) != ft_strchr(null_test, search)) return (6);
	
	return (0);
}
