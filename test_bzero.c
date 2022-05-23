/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:45:48 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:22:27 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

int	test_bzero()
{
	char *entry, real_return[15], test_return[15];

	entry = "Hello World...";
	strcpy(real_return, entry);
	strcpy(test_return, entry);	

	bzero(real_return, 10);
	ft_bzero(test_return ,10);

	if(strcmp(real_return, test_return)) return (1);

	return (0);
}
