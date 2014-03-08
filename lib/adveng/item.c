#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <adveng/container.h>
#include "container.h"

/************************
 * Private Item Members *
 ************************/

// Declarations

struct item_private {
	item_protected protected;
};


/**************************
 * Protected Item Methods *
 **************************/

// Constructor Helper

void item_values(item* self, container* parent, char* name, char* description)
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


/***********************
 * Public Item Methods *
 ***********************/

// Constructor

item* new_item(container* parent, char* name, char* description)
{
	item* self = malloc(sizeof(struct item_private));
	item_values(self, parent, name, description);

	return self;
}


// Getters

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


// Setters

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


// Operations

void print_item(item* self, char extra_newline)
{
	printf("Name:       \t%s\n", ((item_protected*)(self))->name);
	printf("Description:\t%s\n", ((item_protected*)(self))->description);

	if (extra_newline) {
		printf("\n");
	}
}