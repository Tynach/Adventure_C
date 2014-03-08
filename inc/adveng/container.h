#ifndef ADVENG_CONTAINER_H
#define ADVENG_CONTAINER_H

#include <adveng/item.h>

/*******************************************************************************
 * Everything that can old something else is a 'container'. Since these things *
 * can also be interacted with, and in fact interact with other things, they   *
 * inherit everything from the 'item' structure.                               *
 *******************************************************************************/

/**************************************
 * Container Members and Declarations *
 **************************************/

// Necessary Declarations
typedef struct container_private container;

// Public Container Members (to be filled in when needed)
typedef struct {
} container_public;

/*********************
 * Container Methods *
 *********************/

// Constructor
container* new_container(container* parent, char* name, char* description);

// Operations
void add_item(container* self, item* added);
void print_container(container* self);

#endif