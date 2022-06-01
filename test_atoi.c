/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:17:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/01 09:16:44 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int	test_atoi()
{
	char *entry;
	char not_print_test[100] = {'1', 'a', '\2', '\1', '\0'};
	char null_test[100];

	// Basic positive entry
	entry = "12345";
	if(atoi(entry) != ft_atoi(entry)) 		return (1);

	// Basic negative entry 
	entry = "-12345";
	if(atoi(entry) != ft_atoi(entry)) 		return (2);

	// Positive entry with +
	entry = "+12345";
	if(atoi(entry) != ft_atoi(entry)) 		return (3);

	// Entry with numbers and letters
	entry = "12345abcd";
	if(atoi(entry) != ft_atoi(entry)) 		return (4);

	// Entry with letters and numbers
	entry = "abcd12345";
	if(atoi(entry) != ft_atoi(entry)) 		return (5);

	// Entry with just letters
	entry = "abcd";
	if(atoi(entry) != ft_atoi(entry)) 		return (6);

	// Entry with just a sign
	entry = "-";
	if(atoi(entry) != ft_atoi(entry)) 		return (7);

	// Entry with two signs
	entry = "-+12345";
	if(atoi(entry) != ft_atoi(entry)) 		return (8);

	// Empty entry
	entry = "";
	if(atoi(entry) != ft_atoi(entry)) 		return (9);

	return (0);
}
