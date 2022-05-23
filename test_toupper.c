/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:38:16 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 14:06:12 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

int test_toupper()
{
	for(int i = 0; i < 130; ++i) if(toupper(i) != ft_toupper(i)) return (i);
	return (0);
}
