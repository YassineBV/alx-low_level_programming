#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int wildcmp(char *s1, char *s2)
{
	return (ifident(s1, s2));
}
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
