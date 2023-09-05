#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
char *argstostr(int ac, char **av)
{
    int i, j;
    int countav = 0;
    int strcount = 0;
    char * strij;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
        strcount++;
         strcount += strlen(av[i]);
    }
    strij = (char *)malloc(strcount + 1);
    if (strij == 0)
    {
        return (NULL);
    }
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++, countav++)
        {
            strij[countav] = av[i][j];
        }
        strij[countav] = '\n';
        countav++;
    }
    return (strij);
}