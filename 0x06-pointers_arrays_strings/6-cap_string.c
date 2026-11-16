#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
int j = 0;
int is_separator = 0;

if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

while (separators[j] != '\0')
{
if (str[i] == separators[j])
{
is_separator = 1;
break;
}
j++;
}
capitalize_next = is_separator;
i++;
}
return (str);
}
