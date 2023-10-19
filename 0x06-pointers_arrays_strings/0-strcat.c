#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int k, r;

k = 0;
r = 0;

while (dest[k] != '\0')
{
	k++;
}

while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
dest[k] = '\0';
return (dest);
}



Task 1

#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[k] = src[r];
	k++;
	r++;
	}
	dest[k] = '\0';
	return (dest);
}
