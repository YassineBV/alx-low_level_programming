#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int letns(char *s)
{
	if (*s == '\0')
		return (1);
	return (1 + letns(s + 1));
}

int is_s_palind(char *s, int begl,int enl)
{
	if (begl >= enl)
		return (1);

	if (s[begl] != s[enl])
		return (0);
	return (is_s_palind(s, begl + 1, enl - 1));
}

int is_palindrome(char *s)
{
	int lentofs = letns(s);
	return (is_s_palind(s, 0 ,lentofs - 1));
}			
