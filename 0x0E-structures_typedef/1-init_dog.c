#include <stdlib.h>
#include "dog.h"

/**
@@ -12,7 +11,7 @@
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
if (d)
{
d->name = name;
d->age = age;
