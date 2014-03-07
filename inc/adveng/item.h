#ifndef ADVENG_ITEM_H
#define ADVENG_ITEM_H

struct container;

typedef struct {
	struct container* parent;
} item_public;

typedef struct item_public item;

item* new_item(char* name, char* description);

char* get_name(item* this);
char* get_description(item* this);

void set_name(item* this, char* name);

#endif