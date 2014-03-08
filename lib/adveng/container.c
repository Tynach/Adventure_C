#include <adveng/container.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "container.h"

/*****************************
 * Private Container Members *
 *****************************/

// Declarations

struct container_private {
	container_protected protected;
	item** contents;
};


/*******************************
 * Protected Container Methods *
 *******************************/

// Constructor Helper

void container_values(container* self, container* parent, char* name, char* description)
{
	item_values((item*)self, parent, name, description);
	((container_protected*)(self))->item_count = 0;
	self->contents = malloc(0);
}


/****************************
 * Public Container Methods *
 ****************************/

// Constructor

container* new_container(container* parent, char* name, char* description)
{
	container* self = malloc(sizeof(struct container_private));
	container_values(self, parent, name, description);

	return self;
}


// Getters

item* get_item(container* self, unsigned int index)
{
	unsigned int item_count = ((container_protected*)(self))->item_count;
	if (index > item_count - 1) {
		return self->contents[index];
	} else {
		return NULL;
	}
}


// Setters

void add_item(container* self, item* added)
{
	unsigned int item_count = ((container_protected*)(self))->item_count;
	self->contents = realloc(self->contents, sizeof(item*) * item_count);
	self->contents[item_count - 1] = added;
}


// Operations

void print_container(container* self, char extra_newline)
{
	int i;
	unsigned int item_count = ((container_protected*)self)->item_count;

	print_item((item*)self, 0);
	printf("Contains: \t");
	for (i = 0; i < item_count; i++) {
		if (i == item_count - 1) {
			printf("%s.", ((item_protected*)(self->contents[i]))->name);
		} else {
			printf("%s, ", ((item_protected*)(self->contents[i]))->name);
		}
	}
	printf("\n");

	if (extra_newline) {
		printf("\n");
	}
}