/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:22:32 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 11:42:37 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 2

static int	test_1(){
	int	test_result = OK;
	char	*content = "First Node";
	t_list *L;
	size_t	size = ft_strlen(content);

	L = ft_lstnew(content);
	if(ft_strncmp(L->content, content, size) != 0) test_result = KO;
	free(L);
	return (test_result);
}

static int	test_2(){
	int	content = 12345, test_result = OK;
	t_list *L;

	L = ft_lstnew(&content);
	if(*((int *) L->content) != content) test_result = KO;
	free(L);
	return (test_result);
}

void		test_lstnew(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1, &test_2 };
	tests_iterator(f_ptr, TESTS_QUANT);
}

