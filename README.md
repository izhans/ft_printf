# ft_printf
The goal of this project is to recreate the libc printf function.

The function prototype is:
```c
int ft_printf(char const *, ...);
```

The following conversions must be implemented:
|%|prints|
|-|-|
|%c|only one character|
|%s|string|
|%p|pointer - prints the hexadecimal direction|
|%d|decimal number (base 10)|
|%i|integer number (base 10)|
|%u|unsigned integer (base 10)|
|%x|hexadecimal number in lowercase|
|%X|hexadecimal number in uppercase|
|%%|% - is the way to escape the % char|

The original printf buffer management doesn't have to be implemented.

---

Info on...:
- Printf buffer management:
	- https://es.stackoverflow.com/questions/287146/no-entiendo-c%C3%B3mo-funciona-el-buffer-de-printf
	- https://www.gnu.org/software/libc/manual/html_node/Buffering-Concepts.html

- Variadic functions and how to use va_start, va_list, va_arg and va_end:
	- https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html
	- https://www.gnu.org/software/libc/manual/html_node/Argument-Macros.html
	- https://www.cprogramming.com/tutorial/c/lesson17.html
	- https://medium.com/@turman1701/va-list-in-c-exploring-ft-printf-bb2a19fcd128
- Printf output conversions:
	- https://www.gnu.org/software/libc/manual/html_node/Table-of-Output-Conversions.html
		* ‘%c’
		Print a single character. See Other Output Conversions.
		* ‘%s’
		Print a string. See Other Output Conversions.
		* ‘%p’
		Print the value of a pointer. See Other Output Conversions.
		
			The ‘%p’ conversion prints a pointer value. The corresponding argument must be of type void *. In practice, you can use any type of pointer.
		
			In the GNU C Library, non-null pointers are printed as unsigned integers, as if a ‘%#x’ conversion were used. Null pointers print as ‘(nil)’. (Pointers might print differently in other systems.)
		
			For example:
			
				printf ("%p", "testing");
			
			prints ‘0x’ followed by a hexadecimal number—the address of the string constant "testing". It does not print the word ‘testing’.
		* ‘%d’, ‘%i’
		Print an integer as a signed decimal number. See Integer Conversions, for details. 
		
			‘%d’ and ‘%i’ are synonymous for output, but are different when used with scanf for input (see Table of Input Conversions).
		* ‘%u’
		Print an integer as an unsigned decimal number. See Integer Conversions, for details.
		* ‘%x’, ‘%X’
		Print an integer as an unsigned hexadecimal number.
			
			‘%x’ uses lower-case letters and ‘%X’ uses upper-case. See Integer Conversions, for details.
		* ‘%%’
		Print a literal ‘%’ character. See Other Output Conversions.
	- https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html
	- https://www.ibm.com/docs/en/i/7.5?topic=functions-printf-print-formatted-characters
