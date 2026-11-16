#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check
 * @accept: The string of accepted characters
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
i++;
}
return (i);
}
