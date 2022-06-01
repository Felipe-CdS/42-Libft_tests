/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:21:01 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/31 22:01:09 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int	test_strnstr(){

	char	*haystack;
	char	*needle;
	char	sp_c1[100] = {'1', 'a', '\2', '\1', '\0'};
	char	sp_c2[100];

	// Successful find at start of string
	haystack	= "Hello World";
	needle		= "Hello";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (1);

	// Successful find in middle of string
	haystack	= "Hello World";
	needle		= "World";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[6])	return (2);

	// Successful find in end of string
	haystack	= "Hello World";
	needle		= "d";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[10])	return (3);

	// Look alike entries
	haystack	= "thought though tough through thorough throughout";
	needle		= "throughout";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[38])	return (4);

	// Empty needle
	haystack	= "Hello World";
	needle		= "";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (5);

	// Both empty
	haystack	= "";
	needle		= "";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != &haystack[0])	return (6);

	// Unsuccessful search
	haystack	= "Hello World";
	needle		= "Abc";
	if(ft_strnstr(haystack, needle, ft_strlen(haystack)) != NULL)		return (7);

	// // Char at random index
	// entry	= "abcde12345";
	// search	= '2';
	// if(strchr(entry, search) != ft_strchr(entry, search))	return (2);

	// // Char at last index
	// entry	= "abcde12345";
	// search	= '5';
	// if(strchr(entry, search) != ft_strchr(entry, search))	return (3);

	// // Char is a space
	// entry	= "a b c 1 2 3";
	// search	= ' ';
	// if(strchr(entry, search) != ft_strchr(entry, search))	return (4);

	// // Char is a non printable digit
	// //sp_c1 = {'1', 'a', '\2', '\1', '\0'};
	// search	= 1;
	// if(strchr(sp_c1, search) != ft_strchr(sp_c1, search))	return (5);

	// // Char isn't at src
	// entry	= "* - + ! | @";
	// search	= 'a'; 
	// if(strchr(entry, search) != ft_strchr(entry, search))	return (6);

	// // Src is empty
	// entry	= "";
	// search	= 'a';
	// if(strchr(entry, search) != ft_strchr(entry, search))	return (7);

	// // Src is null
	// //char sp_c2[100];
	// search	= 'a';
	// if(strchr(sp_c2, search) != ft_strchr(sp_c2, search))	return (8);
	
	return (0);
}
