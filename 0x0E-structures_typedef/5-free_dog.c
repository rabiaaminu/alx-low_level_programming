/*
 * File: 5-free_dog.c
 * Auth: Rabia Aminu Ahmad
 */
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ...
  * @d: ...
  *
  * Return: ...
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
