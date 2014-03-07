#include <adveng/item.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct item_public {
	item_public public;
	char* name;
	char* description;
} item;

item* new_item(char* name, char* description)
{
	item* this = malloc(sizeof(item));

	this->name = malloc(strlen(name) + sizeof(char));
	strcpy(this->name, name);

	this->description = malloc(strlen(description) + sizeof(char));
	strcpy(this->description, description);

	return this;
}

char* get_name(item* this)
{
	char* name = malloc(strlen(this->name) + sizeof(char));
	strcpy(name, this->name);
	return name;
}

char* get_description(item* this)
{
	char* description = malloc(strlen(this->description) + sizeof(char));
	strcpy(description, this->description);
	return description;
}

void set_name(item* this, char* name)
{
	printf("Here goes...\n");
	this->name = realloc(this->name, strlen(name) + sizeof(char));
	if (this->name == NULL) {
		printf("Error reallocating memory for: %s\n", this->name);
	}
	strcpy(name, this->name);
}