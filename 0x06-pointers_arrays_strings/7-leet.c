#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
int i = 0;

while (str[i] != '\0')
{
char *leet_chars = "aAeEoOtTlL";
char *leet_nums = "4433007711";
int j = 0;

while (leet_chars[j] != '\0')
{
if (str[i] == leet_chars[j])
{
str[i] = leet_nums[j];
break;
}
j++;
}
i++;
}
return (str);
}
