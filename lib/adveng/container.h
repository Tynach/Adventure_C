#ifndef LOCAL_CONTAINER_H
#define LOCAL_CONTAINER_H

#include <adveng/container.h>
#include "item.h"

/*******************************
 * Protected Container Members *
 *******************************/

// Declarations
typedef struct {
	item_protected item_members;
	container_public public;

	unsigned int item_count;
} container_protected;


/*******************************
 * Protected Container Methods *
 *******************************/

// Constructor Helper
void container_values(container* self, container* parent, char* name, char* description);

#endif