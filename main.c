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
	printf("\n----- TEST CHAR -----\n");

	printf("%c\n", 'a');
	ft_printf("%c\n", 'a');

	char c = 'b';
	printf("%c\n", c);
	ft_printf("%c\n", c);

	c = '\0';
	printf("null char <%c>\n", c);
	ft_printf("null char <%c>\n", c);

	printf("%c%c%c%c\n", 'd', 'e', '8', '\n');
	ft_printf("%c%c%c%c\n", 'd', 'e', '8', '\n');
	
	printf("%c\n", 94); // ^
	ft_printf("%c\n", 94);
	
	printf("DEL <%c>\n", 127); // DEL
	ft_printf("DEL <%c>\n", 127); // DEL

	printf("extended char <%c>\n", 128); // idk
	ft_printf("extended char <%c>\n", 128); // idk
	
	printf("\n----- END TEST CHAR -----\n");
}
