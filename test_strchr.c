/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:42:27 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/27 12:15:16 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int	test_strchr()
{
	char	*entry;
	char	search;
	char	sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	char	sp_c2[100];

	// Char at first index
	entry	= "abcde12345";
	search	= 'a';
	if(strchr(entry, search) != ft_strchr(entry, search))	return (1);

	// Char at random index
	entry	= "abcde12345";
	search	= '2';
	if(strchr(entry, search) != ft_strchr(entry, search))	return (2);

	// Char at last index
	entry	= "abcde12345";
	search	= '5';
	if(strchr(entry, search) != ft_strchr(entry, search))	return (3);

	// Char is a space
	entry	= "a b c 1 2 3";
	search	= ' ';
	if(strchr(entry, search) != ft_strchr(entry, search))	return (4);

	// Char is a non printable digit
	//sp_c1 = {'1', 'a', '\2', '\1', '\0'};
	search	= 1;
	if(strchr(sp_c1, search) != ft_strchr(sp_c1, search))	return (5);

	// Char isn't at src
	entry	= "* - + ! | @";
	search	= 'a'; 
	if(strchr(entry, search) != ft_strchr(entry, search))	return (6);

	// Src is empty
	entry	= "";
	search	= 'a';
	if(strchr(entry, search) != ft_strchr(entry, search))	return (7);

	// Src is null
	//char sp_c2[100];
	search	= 'a';
	if(strchr(sp_c2, search) != ft_strchr(sp_c2, search))	return (8);
	
	return (0);
}
