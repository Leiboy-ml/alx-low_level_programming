#include "main.h"

/**
* _islower - start point
* Description: checks is a character is lowercase
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{

if (c == i)
{
return (1);
}
}
return (0);
}

