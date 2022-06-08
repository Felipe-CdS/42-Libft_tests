#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

static int	test_1(){
	return (ND);
	if(/*original_func_ret != test_func_ret*/1) return (KO);
	return (OK);
}

void		test_template(){	
	t_func_array f_ptr[1] = { &test_1 };
	tests_iterator(f_ptr, 1);
}

