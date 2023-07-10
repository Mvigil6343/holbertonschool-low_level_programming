#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * _strcpy - copies a string
 * @src: pointer to the string
 * @dest: destination
 *
 * Return: returns copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *cp = dest;

	while ((*cp++ = *src++) != '\0')
		;
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: new dog info or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (!ndog)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * _strlen(name) + 1);
	ndog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!ndog->name || !ndog->owner)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	ndog->name = _strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcpy(ndog->owner, owner);
	return (ndog);
}
