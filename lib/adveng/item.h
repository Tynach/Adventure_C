#ifndef LOCAL_ITEM_H
#define LOCAL_ITEM_H

#include <adveng/item.h>

/**************************
 * Protected Item Members *
 **************************/

// Declarations

typedef struct {
	item_public public;
	container* parent;
	char* name;
	char* description;
} item_protected;


// Protected Item Methods

// Constructor Helper

void item_values(item* self, container* parent, char* name, char* description);

#endif