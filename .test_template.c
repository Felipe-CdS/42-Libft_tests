#include "libft.h"
#include "libtests.h"

#define TESTS_QUANT 1

int	test_template();
static int test_x(char *debug);
static void debug_msg(char *debug_str);

void		test_template(){	
	int test_ret;
	int		(*f_ptr[TESTS_QUANT])() = {&test_x};
	char	debug_msg[TESTS_QUANT][200] = {""};
	
	for(int i = 0; i < TESTS_QUANT; i++)
	{
		test_ret = (f_ptr[i])(&debug_msg[i]);
		if(test_ret == KO) 		printf(RED "[KO]" RESET);
		else if(test_ret == OK)	printf(GRN "[OK]" RESET);	
		else					printf(YEL "[ND]" RESET);
	} 

	// debug prints
	for(int i = 0; i < TESTS_QUANT; i++) if(*debug_msg[i]) printf("\t\t\t> %s\n", debug_msg[i]);
}

static int	test_x(char *debug_str){

	if(/*original_func_ret != test_func_ret*/)
	{
		debug_msg(debug_str);
		return (1);
	}
	
	return (0);
}

// NOT IMPLEMENTED
// debug printf
// static void debug_msg(char *debug, int test_n, char *real_ret)
// {
// 	char x[2] = {test_n + 48, '\0'};
// 	strcat(debug, "Test ");
// 	strcat(debug, x);
// 	strcat(debug, " Real Ret: ");
// 	strcat(debug, real_ret);
// 	//printf("\n\t\t\t>Test %d: %zu %zu || %s|===| %s", test_n, real_ret, test_ret, real_dst, test_dst);
// }