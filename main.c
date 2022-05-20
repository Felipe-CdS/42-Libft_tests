/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:27:50 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 17:54:23 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#include "libtests.h"

int main(int argc, char *argv[])
{
	char entry[50];
	(void) argc;
	strcpy(entry, argv[1]);
	if(!strcmp(argv[1], "isalpha")) test_isalpha();
	if(!strcmp(argv[1], "isdigit")) test_isdigit();
	if(!strcmp(argv[1], "isalnum")) test_isalnum();
	if(!strcmp(argv[1], "isascii")) test_isascii();
	if(!strcmp(argv[1], "isprint")) test_isprint();
	if(!strcmp(argv[1], "strlen"))	test_strlen();
	if(!strcmp(argv[1], "memset"))	test_memset();
	if(!strcmp(argv[1], "bzero"))	test_bzero();
	if(!strcmp(argv[1], "memcpy"))	test_memcpy();
	if(!strcmp(argv[1], "toupper"))	test_toupper();
	if(!strcmp(argv[1], "tolower"))	test_tolower();
	return(0);
}
