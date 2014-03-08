#ifndef LOCAL_CONTAINER_H
#define LOCAL_CONTAINER_H

#include <adveng/container.h>
#include "item.h"

typedef struct {
	item_protected item_members;
	container_public public;

	unsigned int item_count;
} container_protected;

#endif