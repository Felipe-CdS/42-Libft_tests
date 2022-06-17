/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:04:48 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/06/17 17:55:36 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

void	del(void *content)
{
	free(content);
}
static int	test_1(){
	// return (ND);
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

	ft_lstadd_back(&begin, elem4);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem1);
	
	ft_lstclear(&begin, del);
	printf("%s", elem1->content);
	if (elem1 || elem2 || elem3 || elem4) test_result = KO;
	return (test_result);
}

void		test_lstclear(){	
	t_func_array f_ptr[TESTS_QUANT] = { &test_1 };
	tests_iterator(f_ptr, TESTS_QUANT);
}


