/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:41:25 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 13:14:04 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

static int	test_1(){
	int	test_result = OK;
	t_list		*begin, *elem1, *elem2, *elem3, *elem4;
	char		*str1 = strdup("ABC");
	char		*str2 = strdup("DEF");
	char		*str3 = strdup("GHF");
	char		*str4 = strdup("IJK");

	begin = NULL;
	elem1 = ft_lstnew(str1);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	if (!elem1 || !elem2 || !elem3 || !elem4) test_result = KO;

	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem1);

	if (ft_lstsize(begin) != 4) test_result = KO;
	free(elem1);
	free(elem2);
	free(elem3);
	free(elem4);
	return (test_result);
}

void		test_lstsize(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1 };
	tests_iterator(f_ptr, TESTS_QUANT);
}


