/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:54:18 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/03 14:07:54 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

int	test_calloc()
{
	int 	i;
	char *buffer;

	i = 0;
	buffer = (char *) ft_calloc(10, sizeof(char));
	if(!buffer) printf("Null buffer");

	/*
	while(i < 10)
	{
		printf("%d\n", buffer[i]);
		i++;
	}
	*/
	free(buffer);
	return (0);
}
