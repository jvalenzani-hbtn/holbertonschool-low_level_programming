#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{

    if(!d)
    {
        printf("(nil)");
        return;
    }
    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name?d->name:"(nil)",d->age,d->owner?d->owner:"(nil)");
    return;
}