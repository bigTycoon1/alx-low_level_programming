#include "main.h"
/**
  * _strcmp - function that compares two strings
  * @s1: 1st string
  * @s2: second string
  *
  * Return: 0 if s1 == s2, positive number in ascii if s1s > s2,
  * negative number in ascii if  s2 > s1.
  */
int _strcmp(char *s1, char *s2)
{
	while (s1 == s2 && *s1)
		++s1, ++s2;
	return (*s1 - *s2);
}
