#include <stdio.h>
/**
 * Description: main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
	printf("size of char: %lu byte(s)\n",(unsigned long)sizeof(d));
	printf("size of int: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("size of long long int: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("size of float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
