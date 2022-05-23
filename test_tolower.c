/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:53:34 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 17:57:00 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtests.h"
#include "libft.h"

int test_tolower()
{
	for(int i = 0; i < 130; ++i) if(tolower(i) != ft_tolower(i)) return (i);
	return (0);
}
