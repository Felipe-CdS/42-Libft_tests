/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:31:49 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 12:03:33 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int	test_strrchr()
{
	char	*entry;
	char	search;
	char	sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	char	sp_c2[100];

	// Char at first index
	entry	= "abcde12345";
	search	= 'a';
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (1);

	// Char at random index
	entry	= "abcde12345";
	search	= '2';
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (2);

	// Char at last index
	entry	= "abcde12345";
	search	= '5';
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (3);

	// Char is a space
	entry	= "a b c 1 2 3";
	search	= ' ';
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (4);

	// Char is a non printable digit
	//sp_c1 = {'1', 'a', '\2', '\1', '\0'};
	search	= 1;
	if(strrchr(sp_c1, search) != ft_strrchr(sp_c1, search))	return (5);

	// Char isn't at src
	entry	= "* - + ! | @";
	search	= 'a'; 
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (6);

	// Src is empty
	entry	= "";
	search	= 'a';
	if(strrchr(entry, search) != ft_strrchr(entry, search))	return (7);

	// Src is null
	//char sp_c2[100];
	search	= 'a';
	if(strrchr(sp_c2, search) != ft_strrchr(sp_c2, search))	return (8);
	
	return (0);
}
