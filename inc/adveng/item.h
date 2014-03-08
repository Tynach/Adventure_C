#ifndef ADVENG_ITEM_H
#define ADVENG_ITEM_H

/*******************************************************************************
 * Everything in the game that can be interacted with, or itself interact with *
 * other things, is an 'item'. The 'item' structure is used for anything which *
 * represents a physical object inside the game.                               *
 *******************************************************************************/

/*********************************
 * Item Members and Declarations *
 *********************************/

// Necessary Declarations
typedef struct item_private item;
typedef struct container_private container;

// Public Item Members (to be filled in when needed)
typedef struct {
} item_public;


/****************
 * Item Methods *
 ****************/

// Constructor
item* new_item(container* parent, char* name, char* description);

// Getters
char* get_name(item* self);
char* get_description(item* self);

// Setters
void set_name(item* self, char* name);
void set_description(item* self, char* description);

// Operations
void print_item(item* self, char extra_newline);

#endif