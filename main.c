#include "ft_printf.h"
#include <stdio.h>
int main() {
/* 	 int c;
	char *d;
	c = 'a';
	d = "abc"; */
	//int e;
	//int f;
	//e = 2147483647;
	//e = -2147483648;
	//e = 34444444;
	//f = 20;
	//e = 34444444;
	//f = 34444444; 
	int h = 344;
    //ft_printf("Hello %c\n%s\n%x\n%X\n%p\n", c, d, &h);
	 //ft_printf("Hello %c\n%s\n%p\n%i\n%u\n", c, d, &h, e, f);
	//ft_printf("%%\n", '%');
	ft_printf("%p\n", &h);
	printf("%p\n", &h);
	//ft_printf("%c\n%s\n", c, d);
	//printf("%c\n%s\n", c, d);
	//ft_printf("\n%x\n%X\n", e, f);
	//printf("\n%x\n%X\n", e, f);
    return 0;
}