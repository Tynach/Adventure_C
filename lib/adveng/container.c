#include <adveng/container.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "container.h"

struct container_private {
	container_protected protected;
	item** contents;
};

container* new_container(container* parent, char* name, char* description)
{
	container* self = malloc(sizeof(struct container_private));

	assign_values((item*)self, parent, name, description);
	((container_protected*)(self))->item_count = 0;
	self->contents = malloc(0);

	return self;
}

void add_item(container* self, item* added)
{
	unsigned int item_count = ((container_protected*)(self))->item_count;
	self->contents = realloc(self->contents, sizeof(item*) * item_count);
	self->contents[item_count - 1] = added;
}

void print_container(container* self)
{
	int i;
	unsigned int item_count = ((container_protected*)self)->item_count;

	print_item((item*)self);
	printf("Contains:\n\t");
	for (i = 0; i < item_count; i++) {
		if (i == item_count - 1) {
			printf("%s.", ((item_protected*)(self->contents[i]))->name);
		} else {
			printf("%s, ", ((item_protected*)(self->contents[i]))->name);
		}
	}
	printf("\n");
}