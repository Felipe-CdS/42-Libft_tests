/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:27:50 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 08:59:02 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#include "libtests.h"

int main(int argc, char *argv[])
{
	char entry[50];
	(void) argc;
	if(!argv[1]) test_all();
	else
	{
		strcpy(entry, argv[1]);
		if(!strcmp(argv[1], "isalpha")) 		test_single(&test_isalpha);
		else if(!strcmp(argv[1], "isdigit")) 	test_single(&test_isdigit);
		else if(!strcmp(argv[1], "isalnum")) 	test_single(&test_isalnum);
		else if(!strcmp(argv[1], "isascii")) 	test_single(&test_isascii);
		else if(!strcmp(argv[1], "isprint")) 	test_single(&test_isprint);
		else if(!strcmp(argv[1], "strlen"))		test_single(&test_strlen);
		else if(!strcmp(argv[1], "memset"))		test_single(&test_memset);
		else if(!strcmp(argv[1], "bzero"))		test_single(&test_bzero);
		else if(!strcmp(argv[1], "memcpy"))		test_single(&test_memcpy);
		else if(!strcmp(argv[1], "toupper"))	test_single(&test_toupper);
		else if(!strcmp(argv[1], "tolower"))	test_single(&test_tolower);
		else if(!strcmp(argv[1], "strchr"))		test_single(&test_strchr);
		else if(!strcmp(argv[1], "strrchr"))	test_single(&test_strrchr);
		else if(!strcmp(argv[1], "strncmp"))	test_single(&test_strncmp);
		else if(!strcmp(argv[1], "memchr"))		test_single(&test_memchr);
		else if(!strcmp(argv[1], "memcmp"))		test_single(&test_memcmp);
		else if(!strcmp(argv[1], "strnstr"))	test_single(&test_strnstr);
		else if(!strcmp(argv[1], "atoi"))		test_single(&test_atoi);
		else if(!strcmp(argv[1], "strlcpy"))	test_single(&test_strlcpy);
		else if(!strcmp(argv[1], "strlcat"))	test_single(&test_strlcat);
		else if(!strcmp(argv[1], "memmove"))	test_single(&test_memmove);
	}
	return (0);
}
