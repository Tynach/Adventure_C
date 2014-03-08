#include <adveng/container.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "container.h"

struct container_private {
	container_protected protected;
	unsigned int item_count;
	item** contents;
};

container* new_container(container* parent, char* name, char* description)
{
	container* self = malloc(sizeof(struct container_private));

	assign_values((item*)self, parent, name, description);

	return self;
}

void print_container(container* self)
{
	int i;

	print_item((item*)self);
	printf("Contains:\n\t");
	for (i = 0; i < self->item_count; i++) {
		printf("%s, ", ((item_protected*)(self->contents[i]))->name);
	}
	printf("\n");
}