#include "main.h"
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

}
int _atoi(const char *s)
{
	int po = 1;
	unsigned long int ng = 0, num1, i;
	

	for ( num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
		if (s[num1] == '-')
			po *= -1;
	for (i = num1; s[i] >= 48 && s[i] <= 57; i++)
	{
		ng *= 10;
		ng += (s[i] - 48);
	}
	return (po * ng);
}
void print_integer(unsigned int num)
{
	unsigned long int divid, i, rst;
	divid = 1;

	for (i = 0; num / divid > 9; i++)
	{
		divid *= 10;
	}
	for (; divid >= 1; num %= divid, divid /= 10)
	{
		rst = num / divid;
		_putchar(48 + rst);
	}
}
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_integer(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
