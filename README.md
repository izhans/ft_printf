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
