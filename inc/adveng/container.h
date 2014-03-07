#ifndef ADVENG_CONTAINER_H
#define ADVENG_CONTAINER_H

#include <adveng/item.h>

typedef struct
{
	item_public item_members;
	item* contents;
} container_public;

typedef struct container_public container;

#endif