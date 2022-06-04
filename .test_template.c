#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 6

// 1) Basic test
static int test_1(){

	return (0);
}

// 2) Truncate string
static int test_2(){

	return (0);
}

// 3) Empty Entry
static int test_3(){

	return (0);
}

// 4) len == 0
static int test_4(){

	return (0);
}

// 5) src too big
static int test_5(){

	return (2);
}

// 6) NULL src
static int test_6(){

	return (1);
}

int	test_template(){
	int (*f_ptr[TESTS_QUANT])() = {&test_1, &test_2, &test_3, &test_4, &test_5, &test_6};
	
	for(int i = 0; i < TESTS_QUANT; i++)
	{
		if((f_ptr[(i)])() == 1) 		printf(RED "[KO]" RESET);
		else if((f_ptr[(i)])() == 0) 	printf(GRN "[OK]" RESET);	
		else							printf(YEL "[NI]" RESET);	
	} 

	return (0);
}
