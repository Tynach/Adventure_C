#include <stdio.h>
#include <adveng/item.h>
#include <adveng/container.h>

int main(int argc, char* argv[])
{
	item* lamp = new_item("Lamp", "A bright lamp to light your way.");
	printf("Name:       \t%s\n", get_name(lamp));
	printf("Description:\t%s\n\n", get_description(lamp));
	set_name(lamp, "Mew");
	printf("Name:       \t%s\n", get_name(lamp));
	printf("Description:\t%s\n", get_description(lamp));

	return 0;
}