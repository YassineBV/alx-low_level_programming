#include "main.h"
/**
 * ifident - function that compares two strings
 *
 *@s1:  returns 1 if the strings
 *@s2:can be considered identical
 *Return: otherwise return 0.
*/
int ifident(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *s1 == '\0')
		return (ifident(s1, s2 + 1));
	if (*s1 == *s2)
		return (ifident(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (ifident(s1 + 1, s2) || ifident(s1, s2 + 1));
	return (0);
}
/**
 * wildcmp - recursive function
 *
 *@s1:  returns 1 if the strings
 *@s2:can be considered identical
 *Return: otherwise return 0.
*/

int wildcmp(char *s1, char *s2)
{
	return (ifident(s1, s2));
