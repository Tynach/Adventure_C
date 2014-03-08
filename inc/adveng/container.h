#ifndef ADVENG_CONTAINER_H
#define ADVENG_CONTAINER_H

#include <adveng/item.h>

typedef struct container_private container;

typedef struct {
} container_public;

container* new_container(container* parent, char* name, char* description);

void add_item(container* self, item* added);
void print_container(container* self);

#endif