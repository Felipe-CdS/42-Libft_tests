/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoutinh <felipe32santos@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:02:24 by fcoutinh          #+#    #+#             */
/*   Updated: 2022/05/20 13:24:01 by fcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtests.h"
#include "libft.h"

#define TESTS_QUANT 4
#define CMP_CHECK_1	(memcmp(real_dst, test_dst, (SIZE - OFFSET)) || memcmp(real_src, test_src, SIZE))
#define CMP_CHECK_2	test_dst != test_return

//  1) Basic Test (No overlap & src < dst)
// <-----s----->                 
//                  <-----d----->
static int	test_1()
{
	int 	SIZE = 12, OFFSET = 0;
	char	test_src[100] = "Hello World", 	real_src[100] = "Hello World";	
	char	test_dst[100], 					real_dst[100];
	void	*test_return;

	memcpy(real_dst, real_src,  (SIZE - OFFSET));
	test_return = ft_memcpy(test_dst, test_src, (SIZE - OFFSET));
	
 	if(CMP_CHECK_1 || CMP_CHECK_2) return (KO);
 	return (OK);
}

//  2) Full overlap
//    <-----s-----> 
//    <-----d----->
static int	test_2()
{
	int 	SIZE = 12, OFFSET = 0;
	char	test_src[100] = "Hello World", 	real_src[100] = "Hello World";	
	char	*test_dst = test_src + OFFSET,	*real_dst = real_src + OFFSET;
	void	*test_return;

	memcpy(real_dst, real_src, (SIZE - OFFSET));
	test_return = ft_memcpy(test_dst, test_src, (SIZE - OFFSET));

 	if(CMP_CHECK_1 != 0 || CMP_CHECK_2) return (KO);
 	return (OK);
}

//  3) src < dst with overlap
//      <-----s----->          
//             <-----d----->
static int	test_3()
{
	int 	SIZE = 12, OFFSET = 10;
	char	test_src[100] = "Hello World", 	real_src[100] = "Hello World";	
	char	*test_dst = test_src + OFFSET,	*real_dst = real_src + OFFSET;
	void	*test_return;

	memcpy(real_dst, real_src,  (SIZE - OFFSET));
	test_return = ft_memcpy(test_dst, test_src, (SIZE - OFFSET));

 	if(CMP_CHECK_1 != 0 || CMP_CHECK_2) return (KO);
 	return (OK);
}

//  3) src > dst with overlap
//            <-----s----->          
//   <-----d----->
static int	test_4()
{
	int 	SIZE = 12, OFFSET = 5;
	char	test_dst[100], 					real_dst[100];
	char	*test_src = test_dst + OFFSET,	*real_src = real_dst + OFFSET;
	void	*test_return;

	ft_strlcpy(test_src, "Hello World", SIZE);
	ft_strlcpy(real_src, "Hello World", SIZE);

	memcpy(real_dst, real_src, (SIZE - OFFSET));
	test_return = ft_memcpy(test_dst, test_src, (SIZE - OFFSET));

 	if(CMP_CHECK_1 != 0 || CMP_CHECK_2) return (KO);
 	return (OK);
}

void		test_memcpy(){
	t_func_array f_ptr[TESTS_QUANT] = {&test_1, &test_2, &test_3, &test_4};
	tests_iterator(f_ptr, TESTS_QUANT);
}