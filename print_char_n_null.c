/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_n_null.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:34:10 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/13 16:35:14 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_tests.h"
#include "libft.h"

void	print_char_n_null(char *x, int size)
{
	for(int i = 0; i < size; i++)
	{
		if(x[i])	write(1, &x[i], 1);
		else	write(1, "-", 1);
	}
}
