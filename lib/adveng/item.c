#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "item.h"

struct item_private {
	item_protected protected;
};

item* new_item(container* parent, char* name, char* description)
{
	item* self = malloc(sizeof(struct item_private));
	assign_values(self, parent, name, description);
	return self;
}

char* get_name(item* self)
{
	char* name = malloc(strlen(((item_protected*)(self))->name) + sizeof(char));
	strcpy(name, ((item_protected*)(self))->name);
	return name;
}

char* get_description(item* self)
{
	char* description = malloc(strlen(((item_protected*)(self))->description) + sizeof(char));
	strcpy(description, ((item_protected*)(self))->description);
	return description;
}

void set_name(item* self, char* name)
{
	((item_protected*)(self))->name = realloc(((item_protected*)(self))->name, strlen(name) + sizeof(char));
	strcpy(((item_protected*)(self))->name, name);
}

void set_description(item* self, char* description)
{
	((item_protected*)(self))->description = realloc(((item_protected*)(self))->description, strlen(description) + sizeof(char));
	strcpy(((item_protected*)(self))->description, description);
}

void print_item(item* self)
{
	printf("Name:\n\t%s\n", ((item_protected*)(self))->name);
	printf("Description:\n\t%s\n", ((item_protected*)(self))->description);
}