#include <stdio.h>
#include <stdlib.h>
#include <adveng/item.h>
#include <adveng/container.h>

int main(int argc, char* argv[])
{
	container* room = new_container(NULL, "This Room", "It has a Lamp in it.");
	item* lamp = new_item(room, "Lamp", "A bright lamp to light your way.");
	item* chair = new_item(room, "Chair", "A comfy chair.");
	print_container(room);
	printf("\n");
	print_item(lamp);
	printf("\n");
	print_item(chair);

	return 0;
}