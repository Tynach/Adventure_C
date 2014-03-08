#ifndef ADVENG_ITEM_H
#define ADVENG_ITEM_H

typedef struct item_private item;
typedef struct container_private container;

typedef struct {
} item_public;

item* new_item(container* parent, char* name, char* description);

char* get_name(item* self);
char* get_description(item* self);

void set_name(item* self, char* name);
void set_description(item* self, char* description);

void print_item(item* self);

#endif