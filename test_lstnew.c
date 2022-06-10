/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:22:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/10 17:50:03 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 2

static int	test_1(){
	t_list *L;
	char	*content = "First Node";
	size_t	size = ft_strlen(content);

	L = ft_lstnew(content);
	if(ft_strncmp(L->content, content, size) != 0) return (KO);
	return (OK);
}

static int	test_2(){
	t_list *L;
	int		content = 12345;

	L = ft_lstnew(&content);
	if(*((int *) L->content) != content) return (KO);
	return (OK);
}

void		test_lstnew(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

