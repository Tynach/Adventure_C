#ifndef LOCAL_ITEM_H
#define LOCAL_ITEM_H

#include <adveng/item.h>

typedef struct {
	item_public public;
	container* parent;
	char* name;
	char* description;
} item_protected;

void assign_values(item* self, container* parent, char* name, char* description);

#endif