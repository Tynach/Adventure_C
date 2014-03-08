#ifndef LOCAL_ITEM_H
#define LOCAL_ITEM_H

#include <adveng/item.h>

typedef struct {
	item_public public;
	container* parent;
	char* name;
	char* description;
} item_protected;

void assign_values(item* self, container* parent, char* name, char* description)
{
	((item_protected*)(self))->parent = parent;

	((item_protected*)(self))->name = malloc(strlen(name) + sizeof(char));
	strcpy(((item_protected*)(self))->name, name);

	((item_protected*)(self))->description = malloc(strlen(description) + sizeof(char));
	strcpy(((item_protected*)(self))->description, description);
}

#endif