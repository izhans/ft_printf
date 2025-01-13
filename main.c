#include "ft_printf.h"
#include <stdio.h>

void test_char();

int main()
{
	// char *str = "str";
	// int ret = printf("%s", NULL);
	// printf("ret null = %i\n", ret);
	// ft_printf("hola mundo %c % y %s\n", '-', NULL);

	test_char();

	return 0;
}

void test_char()
{
	int ret_og;
	int ret_copy;
	int test_number = 0;
	printf("\n----- TEST CHAR -----\n");

	ret_og = printf("%c\n", 'a');
	ret_copy = ft_printf("%c\n", 'a');
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	

	char c = 'b';
	ret_og = printf("%c\n", c);
	ret_copy = ft_printf("%c\n", c);
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	

	c = '\0';
	ret_og = printf("null char <%c>\n", c);
	ret_copy = ft_printf("null char <%c>\n", c);
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	

	ret_og = printf("%c%c%c%c\n", 'd', 'e', '8', '\n');
	ret_copy = ft_printf("%c%c%c%c\n", 'd', 'e', '8', '\n');
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	
	
	ret_og = printf("%c\n", 94); // ^
	ret_copy = ft_printf("%c\n", 94);
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	
	
	ret_og = printf("DEL <%c>\n", 127); // DEL
	ret_copy = ft_printf("DEL <%c>\n", 127); // DEL
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	

	ret_og = printf("extended char <%c>\n", 128); // idk
	ret_copy = ft_printf("extended char <%c>\n", 128); // idk
	if (ret_og != ret_copy)
		printf("ERROR test %i [expected: %i actual: %i]\n\n", test_number, ret_og, ret_copy);
	test_number++;
	
	
	printf("\n----- END TEST CHAR -----\n");
}
