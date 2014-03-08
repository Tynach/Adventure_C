#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <adveng/container.h>
#include "container.h"

struct item_private {
	item_protected protected;
};

item* new_item(container* parent, char* name, char* description)
{
	item* self = malloc(sizeof(struct item_private));
	assign_values(self, parent, name, description);
	return self;
}

void assign_values(item* self, container* parent, char* name, char* description)
{
	((item_protected*)(self))->parent = parent;
	if (parent != NULL) {
		((container_protected*)(parent))->item_count++;
		add_item(parent, self);
	}

	((item_protected*)(self))->name = malloc(strlen(name) + 1);
	strcpy(((item_protected*)(self))->name, name);

	((item_protected*)(self))->description = malloc(strlen(description) + 1);
	strcpy(((item_protected*)(self))->description, description);
}

char* get_name(item* self)
{
	char* name = malloc(strlen(((item_protected*)(self))->name) + 1);
	strcpy(name, ((item_protected*)(self))->name);
	return name;
}

char* get_description(item* self)
{
	char* description = malloc(strlen(((item_protected*)(self))->description) + 1);
	strcpy(description, ((item_protected*)(self))->description);
	return description;
}

void set_name(item* self, char* name)
{
	((item_protected*)(self))->name = realloc(((item_protected*)(self))->name, strlen(name) + 1);
	strcpy(((item_protected*)(self))->name, name);
}

void set_description(item* self, char* description)
{
	((item_protected*)(self))->description = realloc(((item_protected*)(self))->description, strlen(description) + 1);
	strcpy(((item_protected*)(self))->description, description);
}

void print_item(item* self)
{
	printf("Name:\n\t%s\n", ((item_protected*)(self))->name);
	printf("Description:\n\t%s\n", ((item_protected*)(self))->description);
}