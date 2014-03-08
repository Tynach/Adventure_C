#include <stdio.h>
#include <stdlib.h>
#include <adveng/item.h>
#include <adveng/container.h>

int main(int argc, char* argv[])
{
	// Create Items
	container* room = new_container(NULL, "This Room", "It has a Lamp in it.");
	item* lamp = new_item(room, "Lamp", "A bright lamp to light your way.");
	item* chair = new_item(room, "Chair", "A comfy chair.");

	// Print Items
	print_container(room, 1);
	print_item(lamp, 1);
	print_item(chair, 0);

	return 0;
}