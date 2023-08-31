#include "main.h"
/**
 * letns - entry of the program
 *
 *@s: function that calculate the lent of s
 *
 *Return: the lent of the string
*/
int letns(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + letns(s + 1));
}
/**
 * is_s_palind - entry of the program
 *
 *@s: function that check if s is palindrome
 *@begl: first index of the string
 *@enl: last index
 *
 *Return: 1 if a string is a palindrome and 0 if not
*/

int is_s_palind(char *s, int begl, int enl)
{
	if (begl >= enl)
		return (1);

	if (s[begl] != s[enl])
		return (0);
	return (is_s_palind(s, begl + 1, enl - 1));
}
/**
 * is_palindrome - entry of the program
 *
 *@s: string to check if palindrome
 *
 *Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int lentofs = letns(s);

	return (is_s_palind(s, 0, lentofs - 1));
}
